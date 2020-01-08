#include <iostream>
#include <cstring>

class N
{
public:
	N(int i)
		: var(i)
	{
		// implicit copy of the vtable addr
	}

	void	setAnnotation(char *str)
	{
		memcpy(this->s, str, (strlen(str)));
	}

	virtual int	operator+(N &rhs)
	{
		return this->var + rhs.var;
	}

	virtual int	operator-(N &rhs)
	{
		return this->var - rhs.var;
	}

	char	s[64];
	int		var;
};

int main(int argc, char **argv)
{
	if (argc <= 1)
		exit(1);

	N	*n1 = new N(5);
	N	*n2 = new N(6);
	N	&n1_ref = *n1;
	N	&n2_ref = *n2;

	n1_ref.setAnnotation(argv[1]);
	n2_ref + n1_ref;

	return 0;
}
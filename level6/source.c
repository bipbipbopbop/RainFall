#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//damn C syntax
typedef void (*fptr)(void);

void	m(void)
{
	puts("Nope");
}

void	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

int main(int argc, char **argv)
{
	void	*ptr1;
	fptr	*ptr2;

	ptr1 = malloc(64);
	ptr2 = malloc(4);
	*ptr2 = &m;
	strcpy(ptr1, argv[1]);
	(**ptr2)();
}
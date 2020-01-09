#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

char	*c = "";// buffer with unknown size

void	m(void)
{
	printf("%s - %d\n", c, time(NULL));
}

int main(int argc, char **argv)
{
	int	*ptr1;
	int	*ptr2;

	ptr1 = malloc(8);
	*ptr1 = 1;
	((void**)ptr1)[1] = malloc(8);

	ptr2 = malloc(8);
	*ptr2 = 2;
	((void**)ptr2)[1] = malloc(8);

	strcpy((char*)ptr1[1], argv[1]);
	strcpy((char*)ptr2[1], argv[2]);

	fgets(c, 68, fopen( "/home/user/level8/.pass", "r"));
	puts("~~");
}
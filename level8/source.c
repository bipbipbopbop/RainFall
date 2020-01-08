#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*auth;
void	*service;

int		main(void)
{
	char	buf[128];

	printf("%p, %p \n", auth, service);
	while (fgets(buf, 128, stdin) != 0)
	{
		//repz cmpsb
		if (strncmp("auth ", buf, 5) == 0)
		{
			auth = malloc(4);
			*(char*)auth = 0;
			//repnz scas
			if (strlen(buf + 5) < 30)
				strcpy((char*)auth, buf + 5);
		}
		//repz cmpsb
		if (strncmp("reset", buf, 5) == 0)
			free(auth);
		//repz cmpsb
		if (strncmp("service", buf, 6) == 0)
			service = strdup(buf + 7);
		//repz cmpsb
		if (strncmp("login", buf, 5) == 0)
		{
			if (((char*)auth)[32] != 0)
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return 0;
}
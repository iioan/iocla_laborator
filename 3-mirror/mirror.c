#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	int i = 0, N = strlen(s);
	char temp;
	for(i = 0; i < N/2; i++)
	{
		temp = *(s+i);
		*(s+i) = *(s + N - i - 1);
		*(s + N - i - 1) = temp;
	}
	(void) s;
}

int main()
{
	char s[150];
	scanf("%s", s);
	mirror(s);
	printf("%s\n", s);
	return 0;
}


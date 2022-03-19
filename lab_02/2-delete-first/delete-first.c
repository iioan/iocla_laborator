#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
	unsigned int i = 0,j = 0, k = 0;
	while(*(s+i))
	{
		if((*(s+i)^*(pattern+j)) == 0)
		{
			printf("%s\n", s+i);
			while(*(pattern+j) && (*(s+i)^*(pattern+j)) == 0)
			{
				j++;
				i++;
			}
		printf("lungime pattern: %d\n", j);
		if(j == strlen(pattern))
			{
				i = i - strlen (pattern);
				break;
			}
		
		}
		i++;
		j = 0;	
	}
	printf("i: %d j: %d\n", i, j);
	for(k = i; k < strlen(s) - j + i; k++)
	{
		*(s+k) = *(s+k+j);
	}
	return s;
}

int main(){
	char s[] = "Ana are mere";
	char *pattern = "re";
	(void) s;
	(void) pattern;
	// int i = 0;
	// while(*(s+i))
	// {
	// 	printf("%s\n", s+i);
	// 	i++;
	// }
	printf("%s\n", delete_first(s, pattern));

	return 0;
}

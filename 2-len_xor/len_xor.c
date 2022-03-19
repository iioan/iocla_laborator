#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	int i;
	for(i = 0; str[i]!=0; i++);

	(void) str;
	return i;
	return -1;
	
}

void equality_check(const char *str)
{
	int i = 0;
	int N = my_strlen(str);
	for(i = 0; i < N; i++)
	{
		int cmp = (i + (1<<i))%N;
		
		if(*(str+i)^*(str+cmp)) continue;
		else
				printf("Address of %c: %p Address of %c: %p\n", *(str+i), (str+i), *(str+cmp), (str+cmp));
	}

	(void) str;
}

int main(void)
{
	/* TODO: Test functions */
	char str[100];
	scanf("%s", str);
	int n = my_strlen(str);
		printf("length = %d\n", n);
	equality_check(str);
	return 0;
}


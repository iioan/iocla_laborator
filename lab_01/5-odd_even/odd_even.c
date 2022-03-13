#include <stdio.h>
#include <stdlib.h>

void print_hex(int number, int nr_bits)
{
	int hexnum[100] = {0}, rem = 0, i = 0;
    while(number!=0)
    {
        rem = number%16;
		
		if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexnum[i] = rem;
        i++;
		number=number/16;
    }
	printf("0x");
	for(i=nr_bits - 1; i>=0; i--)
	{
		if(hexnum[i]==0) printf("0");
		else
	    	printf("%c", hexnum[i]);
	}
	printf("\n");
	(void) number;
	(void) nr_bits;
}

void print_binary(int number, int nr_bits)
{
	int binnum[150] = {0}, i = 0;
	while(number!=0)
	{
		binnum[i] = number % 2;
        number = number/ 2;
        i++;
	}
	printf("0b");
	for(i=nr_bits - 1; i>=0; i--)
	{
	   	printf("%d", binnum[i]);
	}
	printf("\n");
	(void) number;
	(void) nr_bits;
}

void check_parity(int *numbers, int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		if(*(numbers + i)%2 == 0)
				{
					printf("%d = ", *(numbers + i));
					print_binary(*(numbers + i), 8);
				}
		else {
			printf("%d = ", *(numbers + i));
			print_hex(*(numbers + i), 8);
		}
		
	} 
	(void) numbers;
	(void) n;
}

int main()
{
	int n, i = 0, *numbers;
	scanf("%d",&n);
	numbers = malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
	{
		scanf("%d", numbers + i);
	}
	check_parity(numbers, n);
	return 0;
}


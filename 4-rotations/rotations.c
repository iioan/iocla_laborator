#include <stdio.h>

void rotate_left(int *n, int bits)
{
	(*n) = ((*n) << bits)|((*n) >> (32 - bits));
}

void rotate_right(int *n, int bits)
{
	(*n) = ((*n) >> bits)|((*n) << (32 - bits));

}

int main()
{
	int n = 0, nn = 0, left = 0, right = 0;
	scanf("%d",&n);
	nn = n;
	scanf("%d%d", &left, &right);
	rotate_left(&n, left);
	rotate_right(&nn, right);
	printf("left:  %d\n", n);
	printf("right:  %d\n", nn);
	return 0;
}

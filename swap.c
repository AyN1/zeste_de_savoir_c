#include <stdio.h>

void	swap(int *pa, int *pb)
{
	int	tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int	main(void)
{
	int	a = 5;
	int	b = 7;

	printf("a = %d, b = %d\n", a, b);
	printf("a = %p, b = %p\n", &a, &b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	printf("a = %p, b = %p\n", &a, &b);
	return (0);
}

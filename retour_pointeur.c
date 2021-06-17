#include <stdio.h>
#include <stdlib.h>


int *ptr(void)
{
	int	a = 3;
    int *n = &a;

    return n;
}


int main(void)
{
    int *p = ptr();

	printf("%d / %p\n", *p, p);

    *p = 10;
	printf("%d / %p\n", *p, p);
    return 0;
}

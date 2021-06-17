#include <stdio.h>

int	main(void)
{
	int a;
	void *p = &a;

	printf("%p == %p\n", &a, p);

	printf("%p\n", (void *)0); /* Comme ceci */
	printf("%p\n", (void *)NULL); /* Ou comme cela */
	return (0);
}

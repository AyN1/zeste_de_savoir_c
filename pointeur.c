#include <stdio.h>


int main(void)
{
    int a = 10;
    int *pa = &a;
    int **pp = &pa; // **pp -> valeur de a // *pp -> adresse de a -> pp -> adresse de pa;

    printf("a = %d = **pp\n", **pp);
	printf("*pp = %p = &a = %p\n", *pp, &a);
	printf("pp = %p = &pa = %p\n", pp, &pa);
    return 0;
}




// **pp contient la valeur de a
// *pp contient la valeur de pa soit l'adresse de a.
// pp contient l'adresse de pa.

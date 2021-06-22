#include <stdio.h>


int main(void)
{
    int tab[3];

    printf("%p == %p\n", tab+1, &tab);
    return 0;
}

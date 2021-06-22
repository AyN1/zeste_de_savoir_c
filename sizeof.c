#include <stdio.h>

struct test {
    int     i;
    char	c;
    char    d;
    char    e;
    char    f;
    int     x;
    char    k;
    int     s;
};

int main(void)
{
    double f;

    struct test test;


    printf("_Bool : %zu\n", sizeof(_Bool));
    printf("char : %zu\n", sizeof(char));
    printf("short : %zu\n", sizeof(short));
    printf("int : %zu\n", sizeof(int));
    printf("long : %zu\n", sizeof(long));
    printf("float : %zu\n", sizeof(float));
    printf("double : %zu\n", sizeof(double));
    printf("long double : %zu\n", sizeof(long double));

    printf("int : %zu\n", sizeof 5);
    printf("double : %zu\n", sizeof f);

    printf("\nsizeof(test) = %lu", sizeof(test));
    return 0;
}

#include <stdalign.h>
#include <stdio.h>


int main(void)
{
    printf("_Bool: %zu\n", _Alignof(_Bool));
    printf("char: %zu\n", _Alignof(char));
    printf("short: %zu\n", _Alignof(short));
    printf("int : %zu\n", _Alignof(int));
    printf("long : %zu\n", _Alignof(long));
    printf("long long : %zu\n", _Alignof(long long));
    printf("float : %zu\n", alignof(float));
    printf("double : %zu\n", alignof(double));
    printf("long double : %zu\n", alignof(long double));
    return 0;
}

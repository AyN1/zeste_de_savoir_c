#include <stdio.h>

struct temps {
    unsigned heures;
    unsigned minutes;
    double secondes;
	char	test;
};


int main(void)
{
    struct temps *p = &(struct temps) { .heures = 12, .minutes = 0, .secondes = 1. };

	printf("%d, %d, %lf\n", p->heures, p->minutes, p->secondes);
    p->secondes = 42.; /* Ok. */
	printf("%d, %d, %lf\n", p->heures, p->minutes, p->secondes);
	printf("sizeof: %lu\n", sizeof(*p));
    return 0;
}

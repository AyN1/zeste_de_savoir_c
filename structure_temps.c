#include <stdio.h>

typedef struct s_temps
{
	int		h;
	int		m;
	double	s;
}				t_temps;

double	conv_to_sec(t_temps t)
{
	double	res;
	int		res_h;
	int		res_m;

	res_h = t.h * 3600;
	res_m = t.m * 60;
	res = (double)res_h + (double)res_m + t.s;
	return (res);
}

double	delta(t_temps t, t_temps t2)
{
	double	res1_sec;
	double	res2_sec;

	res1_sec = conv_to_sec(t);
	res2_sec = conv_to_sec(t2);
	if (res1_sec > res2_sec)
		return (res1_sec - res2_sec);
	else
		return (res2_sec - res1_sec);
	return (-1);
}

int	main(void)
{
	t_temps	t;
	t_temps	t2;

	printf("%d heure(s) %d minute(s) %f seconde(s)\n", t.h, t.m, t.s);
	printf("%d heure(s) %d minute(s) %f seconde(s)\n", t2.h, t2.m, t2.s);
	printf("Première mesure (hh:mm:ss.xxx) : ");
	scanf("%d:%d:%lf", &t.h, &t.m, &t.s);
	printf("%d heure(s) %d minute(s) %f seconde(s)\n", t.h, t.m, t.s);
	printf("Deuxieme mesure (hh:mm:ss.xxx) : ");
	scanf("%d:%d:%lf", &t2.h, &t2.m, &t2.s);
	printf("%d heure(s) %d minute(s) %f seconde(s)\n", t2.h, t2.m, t2.s);
	printf("\ndelta: %lf secondes\n", delta(t, t2));
	return (0);
}

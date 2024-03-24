#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a){
		if ((b*b - 4 *a *c) > 0) printf ("%.2lf %.2lf", (-b+sqrt(b*b - 4 *a *c))/(2*a), (-b-sqrt(b*b - 4 *a *c))/(2*a));
		else if ((b*b - 4 *a *c) == 0) printf("%.2lf", -b/(2*a));
		else printf("NO");
	}
	else if (b){
		printf("%.2lf", -c/b);
	}
	else printf("NO");
    return 0;
}

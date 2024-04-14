#include <stdio.h>
#include <math.h>


int main () {
	int t;
	scanf("%d", &t);
	int a[t], b[t];
	int x = 0;
	while(t--){
		scanf("%d%d", &a[x], &b[x]);
		x++;
	}
	int min1 = 1000000, min2 = 1000000;
	for (int i = 0; i < x; i++){
		if (a[i] < min1) min1 = a[i];
		if (b[i] < min2) min2 = b[i];
	}
	printf("%lld", (long long) min1 * min2);
    return 0;
}

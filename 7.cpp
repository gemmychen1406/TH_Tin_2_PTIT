#include <stdio.h>
#include <math.h>
int b[1000000] = {};
int nguyento(int x){
	if(x <= 5){
		if (x <= 1 || x == 4) return 0;
		return 1;
	}
	for (int i = 2; i * i <= x; i++){
		if(x % i == 0) return 0;
	}
	return 1;
}

int main () {
	int t;
	scanf("%d", &t);
	for (int h = 1; h <= t; h++){
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (nguyento(a[i])) {
				b[a[i]]++;
			}
		}
		printf("Test %d:\n", h);
		for (int i = 2; i < 1000000; i++){
			if (b[i] > 0){
				printf("%d xuat hien %d lan\n", i, b[i]);
			}
			b[i] = 0;
		}
	}
    return 0;
}

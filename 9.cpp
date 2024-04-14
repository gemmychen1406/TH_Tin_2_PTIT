#include <stdio.h>
#include <math.h>


int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++){
		int m = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[m]) m = j;
		}
		int x = a[i];
		a[i] = a[m];
		a[m] = x;
		printf("Buoc %d: ", i + 1);
		for (int j = 0; j < n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
    return 0;
}

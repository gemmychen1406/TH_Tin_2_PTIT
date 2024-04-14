#include <stdio.h>
#include <math.h>


int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	int min = 1e9, min2 = 1e9;
	int index;
	for (int i =0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	for (int i = 0; i < n; i++){
		if (a[i] < min2 && a[i] >= min && i != index) min2 = a[i];
	}
	printf("%d %d", min, min2);
    return 0;
}

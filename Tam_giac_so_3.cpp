#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++) printf("%d", j * 2 + 1);
		printf ("%d", i * 2 + 1);
		for (int j = i - 1; j >= 0; j--) printf("%d", j * 2 + 1);
		printf("\n");
	}
    return 0;
}

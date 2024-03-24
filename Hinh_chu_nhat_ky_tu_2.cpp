#include <stdio.h>
#include <math.h>


int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= a; i++){
		for (int j = i; j <= b; j++) printf("%c", j + 64);
		if (i <= b) for (int j = i - 1; j >= 1; j--) printf("%c", j+64);
		else {
			if (i > b) printf("%c", b+64);
			for (int j = b - 1; j >= 1; j--) printf("%c", j+64);
		}
		printf("\n");
	}
    return 0;
}

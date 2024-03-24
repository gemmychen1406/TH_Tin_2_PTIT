#include <stdio.h>
#include <math.h>


int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int tich = 1, i = 2;
		while (n > 1){
			int s = 0;
			while(n%i == 0){
				s = 1;
				n /= i;
			}
			if (s) tich *= i;
			i++;
		}
		printf("%d\n", tich);
	}
    return 0;
}

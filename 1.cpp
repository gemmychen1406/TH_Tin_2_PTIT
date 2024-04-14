#include <stdio.h>
#include <math.h>

int nguyento(long long x){
	if (x <= 5){
		if (x <= 1 || x == 4) return 0;
		return 1;
	}
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int main () {
	long long n;
	scanf("%lld", &n);
	long long i = 2;
	while(n){
		if (nguyento(i)){
			printf("%lld\n", i);
			n--;
		}
		i++;
	}
    return 0;
}

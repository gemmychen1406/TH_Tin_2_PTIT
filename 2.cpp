#include <stdio.h>
#include <math.h>

long long gt(long long x){
	long long tich = 1;
	for (long long i = 2; i <= x; i++){
		tich *= i;
	}
	return tich;
}
int strong(long long n){
	long long s = n;
	long long tgt = 0;
	while(s){
		long long k = s % 10;
		tgt += gt(k);
		s /= 10;
	}
	if (tgt == n) return 1;
	return 0;
}
int main () {
	long long n;
	scanf("%lld", &n);
	for (int i = 1; i < n; i++){
		if (strong(i)) printf("%lld ", i);
	}
    return 0;
}

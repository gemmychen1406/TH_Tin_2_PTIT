#include <stdio.h>
#include <math.h>

int thuannghich68(long long x){
	long long k = x;
	long long sum = 0, n = 0;
	int ch6 = 0;
	while(k){
		long long h = k % 10;
		if (h == 6) ch6 = 1;
		n = n * 10 + h;
		sum += h;
		k /= 10;
	}
	if (ch6 == 0) return 0;
	if (sum % 10 != 8) return 0;
	if (n != x) return 0;
	return 1;
}

int main () {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if (a > b){
		long long x = a;
		a = b;
		b = x;
	}
	for (long long i = a; i <= b; i++){
		if (thuannghich68(i)) printf("%lld ", i);
	}
    return 0;
}
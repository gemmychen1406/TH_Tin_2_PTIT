#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long x = n;
		int c = 0, l = 0;
		while (x){
			long long k = x % 10;
			if (k % 2) l++;
			else c++;
			x /= 10;
		}
		if (n % 2 == 0 && c > l){
			printf("YES\n");
		}
		else printf("NO\n");
	}
    return 0;
}
 
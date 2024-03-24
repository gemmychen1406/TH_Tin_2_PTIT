#include <stdio.h>
#include <math.h>

int main () {
	int n, c = 0, l = 0;
	scanf("%d", &n);
	while(n){
		int x = n%10;
		if (x % 2) l++;
		else c++;
		n/= 10;
	}
	printf("%d %d", l, c);
    return 0;
}

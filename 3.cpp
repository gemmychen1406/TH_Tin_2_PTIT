#include <stdio.h>
#include <math.h>

int tongchuso(int n){
	int x = n;
	int sum = 0;
	while(x){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	if (tongchuso(b) >= tongchuso(a)){
		printf("%d %d", a, b);
	}
	else printf("%d %d", b, a);
    return 0;
}

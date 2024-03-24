#include <stdio.h>
#include <math.h>

int main(){
	int x; scanf("%d", &x);
	if(x == 0){
	  printf("0");
	  return 0;
	}
	int a = x;
	int cnt = 0;
	int first;
	while(a){
		cnt++;
		first = a % 10;
		a /= 10;
	}
	int last = x % 10;
	int b = x - last - first * pow(10, cnt - 1);
	if(last == 0) printf("%d",b+first);
	else{
	  int n = last * pow(10, cnt - 1);
	  n += b + first;
	  printf("%d", n);
	}
	return 0;
}
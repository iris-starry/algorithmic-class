//피보나치 수열에 대하여 100번째 항까지의 합을 구하는 알고리즘
// 1+ 1+ 2+ 3+ 5+ 8+ 13 
#include <stdio.h>
int main(){
	int a, b, c, s, n;
	a = 1; b=1; s=2; n=2;
	
	do{
		c = a + b;
		s=s+c;
		n=n+1
		if(n==5) break;
		a=b;
		b=c;
	}while(n<=5);
	printf("total= %d입니다.\n"s)
}

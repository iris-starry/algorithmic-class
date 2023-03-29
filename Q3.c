//등비수열에 대하여 100번째 항까지 합을 구하는 알고리즘 2 + 6 + 18 + 54 
#include <stdio.h>
int main(){
	//a=초기값, d=공차, s=합, n=증가 
	double s; int r,a,n;
	r=3; a=2; s=a; n=2;
	
	while(n<=3){ 
		a = a * r;
		s = s + a;
		n = n + 1;
	} 
	printf("200번째 숫자까지의 합:%d",s);
}

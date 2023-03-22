//등차수열에 대하여 200번째 숫자까지 합 2 + 8 + 14 + 20 + 26 
#include <stdio.h>
int main(){
	//a=초기값, d=공차, s=합, n=증가 
	int a,d,s,n,an;
	a=2; d=6, s=a; n=2; an=0;
	
	while(n<=200){
		an = a+(n-1)*d;
		s = s + an;
		n = n + 1;
	} 
	printf("200번째 숫자까지의 합:%d",s);
}

//피보나치 수열에 대하여 100번째 항까지의 합을 구하는 알고리즘
// 1+ 1+ 2+ 3+ 5+ 8+ 13 
//while
#include <stdio.h>
int main(){
	int A = 1, B=1, S = A+B;
	int N = 2, C;
		printf("피보나치수열 = %d ",A);
		printf("%d ", A);
	while(1){
		C=A+B; S+=C; A=B; B=C;
		N++;
		printf("%d ", B);
		if(N==5) break;
	} 
	printf("\n 합 = %d",S);
}

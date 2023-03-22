#include <stdio.h>

int main(){
	int sum,n;
	sum=0; n=1;
	do{
		sum+=n;
		n++;
	}while(n<=100);

	printf("1부터 100의 합 : %d", sum);

}


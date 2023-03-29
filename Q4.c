//서로 다른 두 자연수 A, B를 입력하여 A와 B사이 자연수들의 합계 구하기
//합계는 작은 수에서 큰 수로 1씩 증가시키며 구한다.
//a, b : 정수 입력 변수 n: 반복처리 변수 sum = 합계 변수
#include <stdio.h>
int main(){
	int a, b, n;
	int sum = 0;
	printf("a 입력 : ")
	scanf("%d",&a) 
	printf("b 입력 : ")
	scanf("%d",&b) 

	if(a>b){
		for(n = b; n<=a; n++){
			sum += n;
		}
		else{
			for(n = a; n<=b; n++){
				sum+=n;
			}
		}
	}
}

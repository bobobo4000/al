// 문제
// ***********************************************************************************************************************************************************************************
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 N이 주어진다.
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 첫째 줄부터 2xN-1번째 줄까지 차례대로 별을 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 1 <= N <= 100
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 3																					 | *
//  																					 | **
//  																					 | ***
//  	 																				 | **
//  	 																				 | *
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 초
// 메모리 제한 : MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int i, j, n;

	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		for (j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i=n-1; i>0; i--) {
		for (j=i; j>0; j--) {
			printf("*");
		}
		printf("\n");
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
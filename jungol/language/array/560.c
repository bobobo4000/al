// 문제
// ***********************************************************************************************************************************************************************************
// 10개의 정수를 입력받아 그 중 가장 작은 수를 출력하는 프로그램을 작성하시오.(입력받을 정수는 1000을 넘지 않는다.)
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 5 10 8 55 6 31 12 24 61 2																						 
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 2																					 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int w[10];
	int i, j;
	int min = 1000;

	for (i=0; i<10; i++) {
		scanf("%d", &w[i]);

		if (w[i] < min) {
			min = w[i];
		}
	}

	printf("%d", min);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
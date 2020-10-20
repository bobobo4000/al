// 문제
// ***********************************************************************************************************************************************************************************
// 10부터 20까지의 숫자를 차례대로 출력하는 프로그램을 작성하시오. for문을 사용하세요.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 																						 | 10 11 12 13 14 15 16 17 18 19 20
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	for (int i=10; i<21; i++) {
		printf("%d ", i);
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
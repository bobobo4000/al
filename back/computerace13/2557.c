// 문제
// ****************************************************************************************************
// Hello World!를 출력하시오.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// Hello World!를 출력하시오.
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
//																						 | Hello World!
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	printf("Hello World! \n");

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
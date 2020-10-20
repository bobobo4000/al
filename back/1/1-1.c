// 문제
// ****************************************************************************************************
// Hello World!를 출력하시오.
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB
#include "header1.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	printf("Hello World! \n");

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("일반함수 소요된 시간 : %.3f \n", res);
}
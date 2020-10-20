// 문제
// ****************************************************************************************************
// 두 정수 A와 B를 입력받은 다음, A*B를 출력하는 프로그램을 작성하시오.
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 256 MB

#include "header1.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int A, B;
	scanf("%d %d", &A, &B);
	printf("A*B의 값: %d \n", A*B);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요 시간 : %.3f \n", res);
}
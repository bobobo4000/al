// 문제
// ****************************************************************************************************
// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
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
	printf("A+B: %d \n", A+B);
	printf("A-B: %d \n", A-B);
	printf("A*B: %d \n", A*B);
	printf("A/B: %d \n", A/B);
	printf("A%B: %d \n", A%B);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
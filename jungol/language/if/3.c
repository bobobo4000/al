// 문제
// ***********************************************************************************************************************************************************************************
// 두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 50 85																			 | 35
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int x, y;

	printf("x, y를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x > y) {
		printf("%d", x-y);
	} else {
		printf("%d", y-x);
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}

// 1. 두 정수를 입력
// 2. 두 정수 중 큰 값이 무언인지 비교
// 3. 큰 값에서 작은 값을 뺌
// 4. 뺀 값을 출력
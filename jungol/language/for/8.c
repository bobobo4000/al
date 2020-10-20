// 문제
// ***********************************************************************************************************************************************************************************
// 두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 10 15																			 | sum : 37, avg : 12.3
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int x, y;
	int sum = 0;
	int cnt = 0;
	float avg = 0;

	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	for (int i=x; i<=y; i++) {
		if (i%3 == 0 || i%5 == 0) {
			sum += i;
			cnt++;
		}
	}

	avg = (float)sum/cnt;
	printf("sum = %d, avg = %.1f", sum, avg);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
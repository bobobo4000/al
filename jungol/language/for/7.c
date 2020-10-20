// 문제
// ***********************************************************************************************************************************************************************************
// 10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 10 20 30 55 66 77 88  99 100 15						 | even : 6, odd: 4
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int n;
	int even = 0;
	int odd = 0;


	for (int i=0; i<10; i++) {
		scanf("%d", &n);

		if (n%2 == 0) {
			even++;
		} else {
			odd++;
		}
	}

	printf("even : %d, odd : %d", even, odd);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
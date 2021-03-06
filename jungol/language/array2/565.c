// 문제
// ***********************************************************************************************************************************************************************************
// 100미만의 양의 정수들이 주어진다.
// 입력받다가 0이 입력되면 마지막에 입력된 0을 제외하고
// 그 때까지 입력된 정수의 십의 자리 숫자가 각각 몇 개인지
// 작은 수부터 출력하는 프로그램을 작성하시오.(0개인 숫자는 출력하지 않는다.)
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 10 55 3 63 85 61 85 0
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 0 : 1
// 1 : 1
// 5 : 1
// 6 : 2
// 8 : 2
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int i;
	int j;
	int num[10];
	int ber;

	for (i=0; i<100; i++) {
		scanf("%d", &ber);

		if (ber == 0) break;
		num[ber/10]++;
	}

	for (j=0; j<10; j++) {
		if (0 <= num[j] && num[j] <= 9) {
			printf("%d : %d\n", j, num[j]);
		}
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
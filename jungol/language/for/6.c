// 문제
// ***********************************************************************************************************************************************************************************
// 100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
// (평균운 반올림하여 소수 둘째자라까지 출력하도록 한다.)
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 3																					 | 64.47
// 99 65 30																		 |
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int n;
	int num;
	int sum=0;

	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d", &num);

		sum += num;
	}

	float avg = (float)sum/n;
	printf("%.2f", avg);
	
	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
// 문제
// ***********************************************************************************************************************************************************************************
// 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그래을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 20																					 | 30
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int num;
	int sum=0;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	for (int i=1; i<=num; i++) {
		if (i%5==0) {
			sum += i;
		}
	}

	printf("5의 배수의 합 = %d", sum);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
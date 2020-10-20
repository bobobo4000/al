// 문제
// ***********************************************************************************************************************************************************************************
// 1반부터 6반까지의 평균점수를 저장한 후 두 반의 반 번호를 입력받아 두 반 평균점수의 합을 출력하는 프로그램을 작성하시오.
// 반별 평균점수는 초기값으로 1반부터 차례로 85.6 79.5 83.1 80.0 78.2 75.0으로 초기화하고
// 출력은 소수 두 번째 자리에서 반올림하여 소수 첫째자리까지 한다.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 1 3																						 
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 168.7																				 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	float w[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
	int x, y;

	scanf("%d %d", &x, &y);
	float avg = (float)w[x-1] + w[y-1];

	printf("%.1f", avg);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
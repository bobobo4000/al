// 문제
// ***********************************************************************************************************************************************************************************
// 자연수 n을 입력받고 1부터 홀수를 차례대로 더해나가면서 합이 n 이상이면 그 때까지 더해진 홀수의 개수와 그 합을 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 100																						 
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 10 100																						 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 32 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
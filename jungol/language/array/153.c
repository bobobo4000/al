// 문제
// ***********************************************************************************************************************************************************************************
// 100개의 정수를 입력받을 수 있는 배열을 선언한 후 정수를 차례로 입력 받다가 -1이 입력되면 입력을 중단하고 -1을 제외한 마지막 세 개의 정수를 출력하는 프로그램을 작성하시오.
// (입력받은 정수가 -1을 제외하고 3개 미만일 경우에는 -1을 제외하고 입력받은 정수를 모두 출력한다.)
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 30 20 10 60 80 -1
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 10 60 80																						 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int w[100];
	int i=0;
	int j;

	for (i=0; i<100; i++) {
		scanf("%d", &w[i]);

		if (w[i] == -1) {
			for (j=i-3; j<i; j++) {
				printf("%d ", w[j]);
			}	
			break;
		}
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
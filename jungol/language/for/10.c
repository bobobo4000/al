// 문제
// ***********************************************************************************************************************************************************************************
// 정수를 입력받아 다음과 같이 순서쌍을 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 4																						 
// ***********************************************************************************************************************************************************************************

// 예제 출력
// ***********************************************************************************************************************************************************************************
// (1, 1) (1, 2) (1, 3) (1, 4)
// (2, 1) (2, 2) (2, 3) (2, 4)
// (3, 1) (3, 2) (3, 3) (3, 4)
// (4, 1) (4, 2) (4, 3) (4, 4)																					 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int n;

	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
// 문제
// ***********************************************************************************************************************************************************************************
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// - 예를 들어, 서로 다른 9개의 자연수
// - 3, 29, 38, 12, 57, 74, 40, 85, 61
// - 이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫 째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 주어지는 자연수는 100보다 작다.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 3																					 | 85
// 29																					 | 8
// 38																					 | 
// 12																					 | 
// 57																					 | 
// 74																					 | 
// 40																					 | 
// 85																					 | 
// 61																					 | 
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

  int a1[9];
	int i, index;
	int max = -1000000;

	for (i=0; i<9; i++) {
		scanf("%d", &a1[i]);
		if (a1[i] > max) {
			max = a1[i];
			index = i;
		}
	}

	printf("최댓값=%d, 위치=%d", max, index+1);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
// 문제
// ***********************************************************************************************************************************************************************************
// "몸무게+100-키"를 비만수치 공식이라고 하자.
// 키와 몸무게를 자연수로 입력받아 첫 번째 줄에 비만수치를 출력하고, 비만수치가 0보다 크면 다음줄에 비만("Obesity")이라는 메시지를 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
//
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
//
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
//
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 155 60																			 | 5
//																						 | Obesity
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int x, y;
	int sum;

	printf("키와 몸무게를 입력하시오: ");
	scanf("%d %d", &x, &y);

	sum = y+100-x;

	printf("%d\n", sum);

	if (0 < sum) {
		printf("Obesity");
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}

// 1. 키와 몸무게를 입력
// 2. 공식을 대입, 비교
// 3. 0보다 클 경우 Obesity 출력
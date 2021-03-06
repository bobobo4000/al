// 문제
// ***********************************************************************************************************************************************************************************
// 삼각형의 밑변의 길이와 높이를 입력받아 넓이를 출력하고, "Continue? "에서 하나의 문자를 입력받아 그 문자가 'Y'나 'y'이면 작업을 반복하고 다른 문자이면 종료하는 프로그램을 작성하시오.
// (넓이는 반올림하여 소수 첫째자리까지 출력한다.)
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// Base = 																	   | 11
// Height = 																	 | 5
// Triangle width = 													 | 27.5
// Continue = 																 | y
//
// Base = 																	   | 10
// Height = 																	 | 10
// Triangle width = 													 | 50.0
// Continue = 																 | n
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int x, y;
	float xy=0;
	char yn[2];

	while(1) {
		printf("Base= ");
		scanf("%d", &x);
		printf("Height= ");
		scanf("%d", &y);
		xy = (float)x*y/2;
		printf("Triangle width= %.1f\n", xy);
		printf("Continue? ");
		scanf(" %c", &yn);
		if (yn == "y") {
		} else {
			break;
		}
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
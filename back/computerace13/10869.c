// 문제
// ****************************************************************************************************
// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
// ****************************************************************************************************
 
// 입력
// ****************************************************************************************************
// 두 자연수 A와 B가 주어진다.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
// ****************************************************************************************************

// 제한
// ****************************************************************************************************
// (1 ≤ A, B ≤ 10,000)
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
// 7 3																				 | 10
//																						 | 4
//																						 | 21
//																						 | 2
//																						 | 1
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 256 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int A, B;
	
	while (1) {
	printf("두 정수를 입력해주세요(공백으로 구분합니다.) : ");
	scanf("%d %d", &A, &B);
		if (1<= A, B <=10000) {
			printf("A+B: %d \n", A+B);
			printf("A-B: %d \n", A-B);
			printf("A*B: %d \n", A*B);
			printf("A/B: %d \n", A/B);
			printf("A%%B: %d \n", A%B);
			break;
		} else {
			printf(" 1 ~ 10000 사이의 값만 입력해주세요\n");
		}
	}
	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
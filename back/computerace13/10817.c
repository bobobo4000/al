// 문제
// ****************************************************************************************************
// 세 정수 a, b, c가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오
// ****************************************************************************************************

// 입력
// ****************************************************************************************************
// 첫째 줄에 세 정수 a, b, c가 공백으로 구분되어 주어진다.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// 두 번째로 큰 정수를 출력한다.
// ****************************************************************************************************

// 제한
// ****************************************************************************************************
// 1 <= a, b, c <= 100
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
// 20 30 10 																	 | 20
// 40 40 10 																	 | 40
// 30 30 30 																	 | 30
// 20 10 10 																	 | 10
// ****************************************************************************************************

// 시간 제한 : 초
// 메모리 제한 : MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int a, b, c;

	printf("a, b, c를 순서대로 입력하세요(공백으로 구분): ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		if (b>=c) {
			printf("%d", b);
		} else {
			printf("%d", c);
		}
	} else if (b >= a && b >= c) {
		if (a>=c) {
			printf("%d", a);
		} else {
			printf("%d", c);
		}
	} else {
		if (a>=b) {
			printf("%d", a);
		} else {
			printf("%d", b);
		}
	}
	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
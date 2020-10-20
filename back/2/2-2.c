// 문제
// ****************************************************************************************************
// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
// ****************************************************************************************************

// 입력
// ****************************************************************************************************
// 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// 시험 성적을 출력한다.
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
// 100																				 | A
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int a;

  while (1) {
		scanf("%d", &a);
		
		if (0 <= a <= 100) {
			if (90 <= a <= 100) {
				printf("A");
				break;
			} else if (80 <= a <= 89) {
				printf("B");
				break;
			} else if (70 <= a <= 79) {
				printf("C");
				break;
			} else if (60 <= a <= 69) {
				printf("D");
				break;
			} else {
				printf("F");
				break;
			}
		} else {
			printf("입력값은 0 ~ 100 사이를 입력하세요!!!");
		}
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
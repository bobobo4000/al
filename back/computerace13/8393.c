// 문제
// ****************************************************************************************************
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
// ****************************************************************************************************

// 입력
// ****************************************************************************************************
// 첫째 줄에 n이 주어진다.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// 1부터 n까지 합을 출력한다.
// ****************************************************************************************************

// 제한
// ****************************************************************************************************
// 1 <= n <= 10,000
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
// 3																					 | 6
// ****************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int a=0, n, i;

	printf("n을 입력하세요: ");
	scanf("%d", &n);

	for(i=0; i<=n; i++) {
		a += i;
	}

	printf("%d", a);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
// 문제
// ***********************************************************************************************************************************************************************************
// 정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
// 작성해야 하는 함수는 다음과 같다.
// - a : 합을 구해야 하는 정수 n 개가 저장되어 있는 배열
// - n : 합을 구해야 하는 정수의 개수
// - 리턴값 : a에 포함되어 있는 정수 n개의 합
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// long long sum(int *a, int n);
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
//
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 0 <= a[i] <= 1,000,000, 1 <= n <= 3,000,000
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
//																						 |
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 0.1초
// 메모리 제한 : 512 MB

#include "header.h"

long long sum(int *a, int n); 

int main() {
	clock_t start, end;
	float res;

	start = clock();

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}

long long sum(int *a, int n) {
	long long add = 0;
	for (int i=0; i<n; i++) {
		add += a[i];
	}
	return add;
}
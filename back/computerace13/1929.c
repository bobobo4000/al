// 문제
// ****************************************************************************************************
// M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
// ****************************************************************************************************

// 입력
// ****************************************************************************************************
// 첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. M이상 N이하의 소수가 하나 이상 있는 압력만 주어진다.
// ****************************************************************************************************

// 출력
// ****************************************************************************************************
// 한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
// ****************************************************************************************************

// 제한
// ****************************************************************************************************
// 1 <= M <= N <= 1,000,000
// ****************************************************************************************************

// 예제 입력																		| 예제 출력
// ****************************************************************************************************
// 3 16																				 | 3
//																						 | 5
//																						 | 7
//																						 | 11
//																						 | 13
// ****************************************************************************************************

// 시간 제한 : 2초
// 메모리 제한 : 256 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int m, n;
	int i, cnt=0;

	printf("m, n값을 입력하세요(공백으로 구분, m <= n): ");
	scanf("%d %d", &m, &n);

	// m=3, n=7 
	// -> 3, 4, 5, 6, 7
	for(m; m<=n; m++) {
		// i = 1, 2, 3, 4, 5, 6, 7
		for(i=1; i<=n; i++) {
			if (m%i==0) {
				cnt++;
			}
		}
		if (cnt == 2 ) {
			printf("%d\n", m);
			cnt=0;
		} else {
			cnt=0;
		}
	}



	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n소요된 시간 : %.3f \n", res);
}
// 문제
// ***********************************************************************************************************************************************************************************
// 정수를 입력받다가 0이 입력되면 0을 제외하고 그 때까지 입력 받은 개수를 출력한 후 입력받은 정수를 차례로 출력하되 그 수가 홀수이면 2배한 값을,
// 짝수인 경우에는 2로 나눈 몫을 출력하는 프로그램을 작성하시오.
// 입력되는 정수의 개수는 100개 이하이다.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 8 10 5 15 100 0
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// 5
// 4 5 10 30 50
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 0 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int num[100];
	int i, j;
	int cnt=0;

	for (i=0; i<100; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 0) {
			break;
		}
		cnt++;
	}
	printf("%d\n", cnt);
	for (j=0; j<i; j++) {
		if (num[j]%2 != 0) {
					printf("%d ", num[j]*2);
		} else {
			num[j]/2;
					printf("%d ", num[j]/2);
		}


	}


	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
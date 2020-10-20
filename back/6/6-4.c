// 문제
// ***********************************************************************************************************************************************************************************
// 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1 ,2, 0, 2이다.
// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다.
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 39																					 | 6
// 40																			 		 |
// 41																			 		 |
// 42																			 		 |
// 43																			 		 |
// 44																			 		 |
// 82																			 		 |
// 83																			 		 |
// 84																			 		 |
// 85																			 		 |
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int arr[10]={0};
	int i;
	int j;
	int num;
	int index = 0;
	int b[10]={0};

	for (i=1; i<=10; i++) {
		scanf("%d", &arr[i]);
		b[i] = arr[i]%42; // b[]에 나머지값 넣기 (39, 40, ... ,1)
	}

	for (i=0; i<10; i++) {
		int cnt = 0;
		for(j=0; j<i; j++) {
			if (b[i] == b[j]) { // 앞의 요소와 중복되면 cnt 값을 변화시킨다.
				cnt++;
			}
		}
		if (cnt == 0) { // b[]요소가 앞의 요소와 중복되지 않으면 index값을 증가 시킨다.
			index++;
		}
	}

	printf("%d", index);

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}

// 1. 입력값 10개를 배열(arr[])에 저장
// 2. 배열에 저장된 10개의 값을 42로 나눈 나머지 값을 다른 배열(b[])에 저장
// 3. b[]의 배열 개수 카운트
// 4. b[]의 값이 중복될 경우 중복 제거(카운트 증가 X)
// 5. b[]의 최종 갯수 출력
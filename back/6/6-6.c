// 문제
// ***********************************************************************************************************************************************************************************
// "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
// - 예를 들어, 10번 문제의 점수는 3이 된다.
// - "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
// - OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다.
// 문자열은 O와 X만으로 이루어져 있다.
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 각 테스트 케이스마다 점수를 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
//
// ***********************************************************************************************************************************************************************************

// 예제 입력																		| 예제 출력
// ***********************************************************************************************************************************************************************************
// 5																					 |
// OOXXOXXOOO																	 | 10
// OOXXOOXXOO																	 | 9
// OXOXOXOXOXOXOX															 | 7
// OOOOOOOOOO																	 | 55
// OOOOXOOOOXOOOOX														 | 30
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int p;
	int i;
	char o[80];

	printf("문제를 풀 사람의 수 입력: ");
	scanf("%d", &p);

	for (i=0; i<p; i++) {
		int sum = 0;
		int plus = 1;
		scanf("%s", &o);
		for (int j=0; j<strlen(o); j++) {
			if (o[j] == 'o') {
				sum += plus;
				plus++;
			} 
			if (o[j] == 'x') {
				plus = 1;
			}
		}
		printf("총 점수: %d\n", sum);
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}

// 1. 문제를 푸는 사람의 수를 입력
// 2. OX퀴즈의 결과를 사람 수에 맞게 반복하여 입력
// 3. OX결과에 따른 결과 값 넣기(O이면 1, X이면 0)
// 4. 조건문에 연속으로 정답을 맞출 경우 점수 누적(OOOX -> 1+2+3+0)
// 5. 중간에 틀릴 경우 다시 처음부터 누적 점수 (OOOXO -> 1+2+3+0+1)
// 6. 최종 결과 값을 출력
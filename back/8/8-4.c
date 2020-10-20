// 문제
// ***********************************************************************************************************************************************************************************
// 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
// 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
// S에는 QR Code "alphanumeric" 문자만 들어 있다.
// QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 반복 횟수 R, 문자열 S가 공백으로 구분되어 주어진다.
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 각 테스트 케이스에 대해 P를 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 1 <= T <= 1,000		1 <= R <= 8			1 <= strlen(S) <= 20
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// 2
// 3 ABC
// 5 /HTP
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// AAABBBCCC
// /////HHHHHTTTTTPPPPP
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 1초
// 메모리 제한 : 128 MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	int R;
	char S[20];
	int i;
	int j;

	scanf("%d %s", &R, S);

	for (i=0; i<strlen(S); i++) {
		for (j=0; j<R; j++) {
				printf("%c", S[i]);
		}
	}

	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
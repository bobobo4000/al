// 문제
// ***********************************************************************************************************************************************************************************
// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
// 단, 대문자와 소문자를 구분하지 않는다.
// ***********************************************************************************************************************************************************************************

// 입력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다.
// ***********************************************************************************************************************************************************************************

// 출력
// ***********************************************************************************************************************************************************************************
// 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
// 단, 가장 많이 사용된 알파벳이 여러 개 존재할 경우에는 ?를 출력한다.
// ***********************************************************************************************************************************************************************************

// 제한
// ***********************************************************************************************************************************************************************************
// 단어 길이는 1,000,000을 넘지 않는다.
// ***********************************************************************************************************************************************************************************

// 예제 입력																		
// ***********************************************************************************************************************************************************************************
// Mississipo
// zZa
// z
// baaa
// ***********************************************************************************************************************************************************************************

// 예제 출력																		
// ***********************************************************************************************************************************************************************************
// ?
// Z
// Z
// A
// ***********************************************************************************************************************************************************************************

// 시간 제한 : 초
// 메모리 제한 :  MB

#include "header.h"

int main() {
	clock_t start, end;
	float res;

	start = clock();

	char S[1000000];
	int i;
	int a[26]={0, };
	int j;
	int k;
	int l;
	int cnt=0;
	int max;
	int result=0;

	scanf("%s", S);

	for (i=0; i<26; i++) {
		a[i] = 0;
	}

	for (j='a'; j<='z'; j++) {
		for (i=0; i<strlen(S); i++) {
			if (j==S[i]) {
				a[j-'a']++;
			}
		}
	}

	for (k='A'; k<='Z'; k++) {
		for (l=0; l<strlen(S); l++) {
			if (k==S[l]) {
				a[k-'A']++;
			}
		}
	}

	max = a[0];
	for (i=1; i<26; i++) {
		if (i==a[i]) {
			max = a[i];
			cnt = i;
		}
	}

	for (i=0; i<26; i++) {
		if (max==a[i]) {
			result++;
		}
	}

	if (result > 1) {
		printf("?");
	} else {
		printf("%c", cnt+'A');
	}
	
	end = clock();
	res = (float)(end - start)/CLOCKS_PER_SEC;

	printf("\n\n소요된 시간 : %.3f \n", res);
}
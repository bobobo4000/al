// ***********************************************************************************************************************************************************************************
// 2차원 배열 = int x[a][b] (표현할때는 [열][행] 순서로 됨) ([세로][가로])
// 2차원 배열은 열과 행으로 이루어짐
// ex) int x = a[3][4]    
// [0][0], [0][1], [0][2], [0][3]
// [1][0], [1][1], [1][2], [1][3]
// [2][0], [2][1], [2][2], [2][3]
// ***********************************************************************************************************************************************************************************

// ***********************************************************************************************************************************************************************************
// 배열 장점
// 1. 구현이 간단하다.
// 2. 인덱스 값 기준으로 어디든 한 번에 참조 가능 -> 데이터 참조가 쉬움

// 배열 단점
// 1. 삽입, 삭제 시 오버헤드 : 삽입 및 삭제 과정에서 데이터 이동(복사)가 매우 빈번하게 일어남
// 2. 항목의 개수 제한 : 배열의 길이는 초기에 결정하고  변경할 수 없기 때문에 유한적인 데이터만 넣을 수 있다.
// ***********************************************************************************************************************************************************************************

// ***********************************************************************************************************************************************************************************
// 배열 초기화
// 2차원 배열을 초기화 할 때 가로 요소를 중괄호로 묶지 않아도 컴파일이 됨
// 결과도 가로 요소를 중괄호로 묶었을 때와 같음
// 하지만 이해하기 어려워서 잘 쓰이지 않는 방법
// ex) int numArr[3][4] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132};
// 배열을 0으로 초기화 하려면 다음과 같은 방법으로 실행
// ex) int numArr[3][4] = {0, };
// ***********************************************************************************************************************************************************************************
#include <stdio.h>

int main() {
	// 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
	int numArr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};
	// 11 : 세로 인덱스 0, 가로 인덱스 0인 요소 출력
	printf("%d\n", numArr[0][0]);
	// 99 : 세로 인덱스 2, 가로 인덱스 0인 요소 출력
	printf("%d\n", numArr[2][0]);
	// 132 : 세로 인덱스 2, 가로 인덱스 2인 요소 출력
	printf("%d\n", numArr[2][3]);

	return 0;
}
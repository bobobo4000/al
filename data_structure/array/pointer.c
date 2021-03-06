// ***********************************************************************************************************************************************************************************
// 포인터란
// - 메모리의 주소 값을 저장하기 위한 변수
// ***********************************************************************************************************************************************************************************

// ***********************************************************************************************************************************************************************************
// 포인터 예제
// ***********************************************************************************************************************************************************************************
#include <stdio.h>

int main() {
	int a = 10; 		// 변수 a 선언 및 대입
	double b = 3.14;// 변수 b 선언 및 대입
	int* pA = &a;		// 포인터 변수 pA 선언 및 대입
	double* pB = &b;// 포인터 변수 pB 선언 및 대입

	printf("%d\n", a);		// 변수 a 값
	printf("%f\n", b);		// 변수 b 값
	printf("0x%p\n", pA);	// 변수 a의 주소값
	printf("0x%p\n", pB); // 변수 b의 주소값
	printf("%d\n", *pA);	// 변수 a의 주소값(pA)이 가리키고 있는 값, 즉 변수 a값
	printf("%f\n", *pB);	// 변수 b의 주소값(pB)이 가리키고 있는 값, 즉 변수 b값 ㅡ

	return 0;
}
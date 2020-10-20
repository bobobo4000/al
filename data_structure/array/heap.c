// ***********************************************************************************************************************************************************************************
// 데이터, 스택, 힙 영역이란

// 데이터 영역에는 전역 변수와 static 변수가 할당됨
// - 전역 변수는 메인 함수의 밖에 선언되는 변수로 프로그램 어디에서나 접근이 가능하며, 한 번 초기화하면 두 번 다시 초기화 할 수 없다는 특징이 있음
// - 전역 변수와 static 변수 모두 초기화하면 다시 초기화 할 수 없지만, static 변수는 전역 변수와 달리 선언된 지역 내에서만 접근 가능 
// - 프로그램 시작과 동시에 할당되고, 프로그램이 종료되어야 메모리에서 소멸됨

// 스택 영역에는 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장됨
// - 지역 변수는 main 함수든 어떠한 형태의 함수든 함수의 몸체 부분에서 선언된 변수를 의미하고, 매개 변수는 함수의 선언부에 선언되는 변수들
// - 이 영역에 할당된 변수들은 함수 호출이 완료되면 사라진다는 특징이 있음
// - 컴파일 타임에 크기 결정

// 힙 영역은 프로그래머가 필요에 따라 메모리를 할당하거나 소멸할 때 사용되는 메모리 공간
// - C언어에서는 malloc 함수를 이용해서 힙 영역에 메모리를 할당 할 수 있고, 그 할당된 메모리는 free함수를 호출함으로 소멸할 수 았음
// - 런 타임에 크기 결정
// ***********************************************************************************************************************************************************************************

// ***********************************************************************************************************************************************************************************
// 메모리 할당 및 소멸
// ***********************************************************************************************************************************************************************************
#include <iostream>

void fct1(int);
void fct2(int);

// 전역 변수
// 데이터 영역에 할당
int k = 10; 
int h = 20;

int main(void) {
	// 지역 변수
	int m = 500;
	
	// 스택 영역에 할당
	fct1(m);
	fct2(m);

	// 힙 영역에 s값 할당
	int* s;
	s = (int*)malloc(sizeof(int));

	*s = 211;

	// free() 함수로 인해 heap영역에 할당된 변수 s의 공간이 소멸
	free(s);

	return 0;
}// main 종료로 함수에 할당된 스택 영역도 지워지고 처음에 데이터 영역에 할당된 전역 변수들을 위한 공간들도 지워짐

// int a = 매개 변수
void fct1(int a) {
	int aa = 1;
}
void fct2(int b) {
	int bb = 2;
}
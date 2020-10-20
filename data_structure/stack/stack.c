#include <stdio.h>

// stack의 최대 크기는 30으로 한정
#define MAX_STACK_SIZE 30

// stack에 정수 값을 하나 추가할 때 사용하는 함수
// a_num : 추가할 정수 값, 
// ap_stack : stack 메모리 영역의 시작주소
// ap_data_count : stack에 저장된 데이터 개수가 저장된 메모리의 주소
void Push(int a_num, int ap_stack[], int *ap_data_count) {
	// stack에 빈 공간이 있는 경우에만 입력을 받는다.
	if (*ap_data_count < MAX_STACK_SIZE) {
		// stack에 새로운 값을 저장한다.
		ap_stack[*ap_data_count] = a_num;
		// 저장된 갯수를 증가시킨다.
		(*ap_data_count)++;
	} else printf("Stack이 가득차서 값을 더 이상 넣을 수 없습니다.\n");
}

// stack에서 마지막에 입력된 정수 값을 하나 가져오는 함수
// ap_num : stack에서 가져온 정수값이 저장될 주소
// ap_stack : stack 메모리 영역의 시작 주소
// ap_data_count : stack에 저장된 데이터 개수가 저장된 메모리의 주소
// stack에서 정수 값을 성공적으로 가져오면 1을 반환하고 실패하면 0을 반환한다.
int Pop(int *ap_num, int ap_stack[], int *ap_data_count) {
	// stack에 저장된 값이 없는 경우
	if (*ap_data_count == 0) {
		printf("Stack에 저장된 값이 없습니다.\n");
		return 0;
	}
	// stack에 저장된 정수의 갯수를 줄임
	(*ap_data_count)--;
	// 마지막에 저장되어 있던 정수값을 저장함
	*ap_num = ap_stack[*ap_data_count];
	return 1;
}

// stack에 있는 값들을 출력하는 함수
// ap_stack : stack 메모리 영역의 시작 주소
// a_data_count : 현재 stack에 저장된 데이터 주소
void ShowStack(int *ap_stack, int a_data_count) {
	int i;

	if (a_data_count == 0) printf("Stack에 저장된 값이 없습니다.\n");
	else {
		printf("Stack에 저장된 값 목록\n");
		for (i=0; i<a_data_count; i++) {
			printf("[%03d] : %d\n", i + 1, ap_stack[i]);
		}
		printf("총 %d개의 값이 저장 되어 있습니다.\n", a_data_count);
	}
}

int main(void) {
	// 메뉴 항목을 선택할때 사용할 변수와 값을 입력받을 때 사용할 변수
	int select_index = 0, temp = 0;
	// stack에 저장된 데이터의 개수
	int count = 0;
	// stack으로 사용할 메모리 공간
	int stack[MAX_STACK_SIZE];

	while (select_index != 9) {
		// 사용자에게 선택할 수 있는 기능을 보여준다.
		printf("\n\n1. Stack에 값 넣기\n");
		printf("2. Stack에서 값 꺼내기\n");
		printf("3. Stack에 저장된 값 확인\n");
		printf("9. 프로그램 종료\n\n");
		printf("선택 : ");
		// 사용자가 선택한 메뉴값을 얻는다. 
		scanf("%hd", &select_index);

		switch (select_index) {
			// 사용자가 입력된 값을 stack에 저장한다.
			case 1: 
				printf("저장할 값을 입력하세요 : ");
				scanf("%hd", &temp);
				Push(temp, stack, &count);
				break;
			// stack에 저장된 정수값을 가져온다.
			case 2:
				if (Pop(&temp, stack, &count)) printf("가져온 값 -> %d", temp);
				break;
			// stack에 저장된 값들을 보여준다.	
			case 3:
				ShowStack(stack, count);
				break;
		}
	}
	return 0;
}
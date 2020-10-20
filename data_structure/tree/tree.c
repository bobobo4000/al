// 이진트리의 표현

// ***********************************************************************************************************************************************************************************
// 1. 배열표현법
// 모든 이진트리를 포화 이진트리라고 가정하고 각 노드에 번호를 붙여서 그 번호를 배열의 인덱스로 삼아 노드의 데이터를 배열에 저장하는 방법
// ***********************************************************************************************************************************************************************************

// ***********************************************************************************************************************************************************************************
// 2. 링크표현법
// 포인터를 이용하여 부모노드가 자식노드를 가리키게 하는 방법
// 노드는 구조체로 표현하고 링크는 포인터로 표현
// ***********************************************************************************************************************************************************************************
// 헤더파일 선언
#include <stdio.h>
#include <stdlib.h>

// 트리의 요소를 구조체로 정의
typedef struct TreeNode {
	struct TreeNode *left;
	int data;
	struct TreeNode *right;
} TreeNode;

// main함수
void main() {
	TreeNode *n1, *n2, *n3;
	n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n2 = (TreeNode *)malloc(sizeof(TreeNode));
	n3 = (TreeNode *)malloc(sizeof(TreeNode));
	n1->data = 10; // 첫 번째 노드를 설정
	n1->left = n2;
	n2->data = 20; // 두 번째 노드를 설정
	n2->left = NULL;
	n2->right = NULL;
	n3->data = 30; // 세 번째 노드를 설정
	n3->left = NULL;
	n3->right = NULL;
	free(n1);
	free(n2);
	free(n3);
}
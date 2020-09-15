/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2,*pA,*pB;
	//กำหนด set n1 set n2
	printf("Enter set {A} = ");
	scanf("%d", n1);
	scanf("%d", n2);
	*pA = n1;
	*pB = n2;
	pA = (int*)malloc(n1 * sizeof(int));
	pB = (int*)malloc(n2 * sizeof(int));
	printf("A x B = { ");
	for (int a = 0;a < 10;a++) {
		for (int b = 0; b < 10;b++) {
			printf("(%d,%d) , ", *pA, *pB);
			pA++;
		}
		pB++;
	}
	printf(" }");
	return 0;
}*/
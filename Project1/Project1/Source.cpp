#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  num, x[100];
	printf("Enter Number = ");
	scanf_s("%d", &num);

	char auksorn[100];
	for (int i = 0; i < num; i++) {
		printf("Enter Number To Array [%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	printf("----------------------------\n");

	for (int i = 0; i < num; i++) {
		if (x[i] >= 0 && x[i] % 2 == 0) {
			auksorn[i] = 'E';
		}
		else if (x[i] >= 0 && x[i] % 2 != 0) {
			auksorn[i] = 'O';
		}
	}
	
	for (int i = 0; i < num; i++) {
		if (x[i] >= 0 && x[i] <= 100) {
			printf("Number To Array [%d] \n", i);
			printf("Number %d : %c\n\n", x[i], auksorn[i]);
		}
	}
	return 0;
}
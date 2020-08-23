#include<stdio.h>

int main() {
	int num, i, j;
	printf("Enter number : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (i % num == 1) {
			for (j = 1; j <= num; j++) {
				printf("*");
			}
		}
		else if (i % num == 0) {
			for (j = 1; j <= num; j++) {
				printf("*");
			}
		}
		else {
			for (j = 1; j <= num; j++) {
				if (j % num == 1) {
					printf("*");
				}
				else if (j % num == 0) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h> //포르자 2학기 3주차 2446 별찍기-9
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < 2 * (n - i) - 1; j++)
			printf("*");
		printf("\n");
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < 2 * (n - i) - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
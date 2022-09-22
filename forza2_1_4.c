#include <stdio.h> //포르자 2학기 1주차 4번문제
int main() { // 세자리수의 곱셈의 덧셈
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * (b % 100 / 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);

	
	return 0;
}
#include <stdio.h> //������ 2�б� 1���� 4������
int main() { // ���ڸ����� ������ ����
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * (b % 100 / 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);

	
	return 0;
}
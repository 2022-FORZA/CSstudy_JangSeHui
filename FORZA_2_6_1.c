#include <stdio.h>//������ 2�б� 6���� 2525 ���� �ð� ����
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int A = 0, B = 0, C = 0, hour = 0, min = 0;
	//A : ���� �ð� B : �� C : �丮�ϴµ� �ʿ��� �ð�(�� ����)

	scanf("%d %d",&A, &B); 
	scanf("%d", &C);
	B += C; //B�� �� ��� ����
	if (B > 59) { //B�� 60�̻��� �� �� ������ ���������
		hour = B / 60; 
		B = B % 60;
		A += hour;

		if (A > 23) //24���� 0���� ǥ���������
			A = A % 24;
	}
	printf("%d %d", A, B);

	return 0;
}


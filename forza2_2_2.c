#include <stdio.h> //������ 2�б� 2���� 2577�� ������ ����
int main() {
	int A,B,C,total=0,num;
	int arr[10]={0,};

	scanf("%d\n%d\n%d", &A, &B, &C);
	total = A * B * C;
	while (total > 0) {
		num = total % 10; //num�� ���� 1�� �ڸ� ����
		arr[num]++;
		total /= 10; //�����ڸ���ȯ
	}
	for (int j = 0; j < 10; j++) {
		printf("%d\n", arr[j]);
	}
	return 0;
}
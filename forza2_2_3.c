#include <stdio.h> //������ 2�б� 2���� ���� 2959 �ź��� ����
int main() {
	int arr[4], temp;
	for (int i = 0; i < 4; i++)
		scanf("%d ", &arr[i]);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%d", arr[0] * arr[2]);
	return 0;
}
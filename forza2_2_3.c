#include <stdio.h> //포르자 2학기 2주차 과제 2959 거북이 문제
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
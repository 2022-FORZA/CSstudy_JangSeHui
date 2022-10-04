#include <stdio.h> //포르자 2학기 2주차 2577번 숫자의 개수
int main() {
	int A,B,C,total=0,num;
	int arr[10]={0,};

	scanf("%d\n%d\n%d", &A, &B, &C);
	total = A * B * C;
	while (total > 0) {
		num = total % 10; //num이 현재 1의 자리 숫자
		arr[num]++;
		total /= 10; //다음자리변환
	}
	for (int j = 0; j < 10; j++) {
		printf("%d\n", arr[j]);
	}
	return 0;
}
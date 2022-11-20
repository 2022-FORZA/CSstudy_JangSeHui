#include <stdio.h>//포르자 2학기 6주차 2525 오븐 시계 문제
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int A = 0, B = 0, C = 0, hour = 0, min = 0;
	//A : 현재 시각 B : 분 C : 요리하는데 필요한 시간(분 단위)

	scanf("%d %d",&A, &B); 
	scanf("%d", &C);
	B += C; //B에 분 모두 더함
	if (B > 59) { //B가 60이상일 때 시 단위로 나눠줘야함
		hour = B / 60; 
		B = B % 60;
		A += hour;

		if (A > 23) //24부터 0으로 표기해줘야함
			A = A % 24;
	}
	printf("%d %d", A, B);

	return 0;
}


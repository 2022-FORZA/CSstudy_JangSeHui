#define _CRT_SECURE_NO_WARNINGS //포르자 2학기 6주차 1297번 TV 크기 문제
#include <stdio.h>
#include <math.h>
 
int main()
{
	int D, H, W;
	double Dratio;
	scanf("%d %d %d", &D, &H, &W);
	Dratio = sqrt((SH * H) + (W * W)); //피타고라스 통해 대각선의 비율 구하기
	double realH = D * H / Dratio; // realW:W=D:Dratio 진짜길이 : 길이비율 = 대각선 : 대각선비율
	double realW = D * W / Dratio;
	printf("%d %d", (int)realH, (int)realW);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS //������ 2�б� 6���� 1297�� TV ũ�� ����
#include <stdio.h>
#include <math.h>
 
int main()
{
	int D, H, W;
	double Dratio;
	scanf("%d %d %d", &D, &H, &W);
	Dratio = sqrt((SH * H) + (W * W)); //��Ÿ��� ���� �밢���� ���� ���ϱ�
	double realH = D * H / Dratio; // realW:W=D:Dratio ��¥���� : ���̺��� = �밢�� : �밢������
	double realW = D * W / Dratio;
	printf("%d %d", (int)realH, (int)realW);
	return 0;
}

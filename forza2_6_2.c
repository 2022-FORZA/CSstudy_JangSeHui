#include <stdio.h> //������2�б� 6���� 1152�� �ܾ��� ��������
#include <string.h> //���ڿ� ���� ��ȯ 
#define _CRT_SECURE_NO_WARNINGS
#define length 1000003 //null ����

int main() {
	char str[length] = { 0 };
	int len,i, cnt=0;
	scanf("%[^\n]", strS);
	//"%[^\n]"�� ���Ͱ� ���� ������ ���ڿ��� ���� (������ �����ؼ� �Է¹ޱ� ����)
	len = strlen(str);

	if (len == 1 && str[0] == ' ') {
		printf("0\n");
		return 0; //���α׷� ���� 
	}
	// �����ϳ��� �Է� ���� �� ���� 0���

	for (i =1; i < len-1; i++) { 
		/*���� ���� �������� �ܾ��� ���� �ľ��ϱ� ������
		 ó���� ���� ���� ���� ��� int i ���� ������ ���� -1*/
		if (str[i] == ' ') cnt++;
	}

	printf("%d", cnt + 1); //���� ������ �ܾ� üũ �׷��� +1

	return 0;
}

#include <stdio.h> //포르자2학기 6주차 1152번 단어의 개수문제
#include <string.h> //문자열 길이 반환 
#define _CRT_SECURE_NO_WARNINGS
#define length 1000003 //null 생각

int main() {
	char str[length] = { 0 };
	int len,i, cnt=0;
	scanf("%[^\n]", strS);
	//"%[^\n]"은 엔터가 나올 때까지 문자열을 받음 (공백을 포함해서 입력받기 위해)
	len = strlen(str);

	if (len == 1 && str[0] == ' ') {
		printf("0\n");
		return 0; //프로그램 종료 
	}
	// 공백하나만 입력 됐을 때 따로 0출력

	for (i =1; i < len-1; i++) { 
		/*공백 갯수 기준으로 단어의 수를 파악하기 때문에
		 처음과 끝에 공백 들어올 경우 int i 지정 끝나는 지점 -1*/
		if (str[i] == ' ') cnt++;
	}

	printf("%d", cnt + 1); //공백 갯수로 단어 체크 그래서 +1

	return 0;
}

#include <stdio.h> //FORZA2학기3주차 2857번 FBI
#include <string.h>
int main() {
	int k = 0;
	int len = 0;
	char FBI[11];
	for (int i = 1; i <= 5; i++) {
		scanf("%s", FBI[i]);
		for (int j = 0; j < len -2; j++) {
			len = strlen(FBI);
			if (FBI[j] == 'F' && FBI[j + 1] == 'B' && FBI[j + 2] == 'I') {
				printf("%d ", i);
				k++;
				break;
			}
		}
	}
	if (k == 0) printf("HE GOT AWAY!");
	return 0;
}
//런타임 에러 1. 두번째 for문의 조건식을 '\0'을 만나면 종료하게 했음 - if문에서 null값을 만나지 않게 strlen-2해줌
//2.printf("%d, &i) 라고 했는데 (1)&쓰면 안 되고 (2)출력할때 0번째 요소라고 출력됨 +1을 해줘야 출력이 올바르게 됨 i=0부터 시작하니까!!
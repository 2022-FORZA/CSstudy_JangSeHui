#include <stdio.h> //FORZA2�б�3���� 2857�� FBI
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
//��Ÿ�� ���� 1. �ι�° for���� ���ǽ��� '\0'�� ������ �����ϰ� ���� - if������ null���� ������ �ʰ� strlen-2����
//2.printf("%d, &i) ��� �ߴµ� (1)&���� �� �ǰ� (2)����Ҷ� 0��° ��Ҷ�� ��µ� +1�� ����� ����� �ùٸ��� �� i=0���� �����ϴϱ�!!
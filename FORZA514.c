#include <stdio.h> //������ 2�б� 5���� 1009�� �л�ó��
main() {
	int a, b, T, data, result;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &a, &b);
		data = a;
		for (int i = 1; i < b; i++)
			data = data * a % 10;
		result = data % 10;
		if (result == 0) printf("10\n");
		else printf("%d\n", result);
	}
	return 0;
}
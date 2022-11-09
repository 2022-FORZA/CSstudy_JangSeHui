#include <stdio.h> //포르자 2학기 5주차 1009번 분산처리
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
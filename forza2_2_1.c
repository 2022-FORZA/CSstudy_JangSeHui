#include <stdio.h> //포르자 2학기 2주차 2547번 사탕 선생 고창영
int main() {
	int T;
	long long candy=0, N = 0, sum = 0;
	scanf("%d", &T);
	printf("\n");
	while (T--) {
		scanf("%lld", &N);
		for (int i = 0; i < N; i++) {
			scanf("%lld", &candy);
			sum += candy;
			sum %= N;
		}
		if (sum % N == 0) printf("YES\n");
		else printf("NO\n");
	}
}
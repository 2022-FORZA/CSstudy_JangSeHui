#include <stdio.h> //포르자 2학기 5주차 23972번 악마의 제안

main() {

	long K, N;
	long long result;
	scanf("%ld %ld", &K, &N);

	if (N == 1) printf("-1"); // 손해를 보는 경우 분모가 n-1이 0이 될 때 무조건 손해를 봄
	else {
		result = (K * N) / (N - 1);
		if ((K * N) % (N - 1))  // 소수점이 나오는 경우 +1을 해야함
			result++;

		printf("%lld", result); // 소수점이 나오지 않는 경우 그대로 출력

		return 0;
	}
}
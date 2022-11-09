#include <stdio.h> //포르자 2학기 5주차 13458 시험 감독 문제

/*전체 응시자수를 합산하고 감독관을 할당하려고 했는데
각각 시험장에 들어가는 사람의 수가 각각 다르기 때문에 배열을 이용해야 한다는 것을 깨달음*/

main() {
	int N, A[10000000], B, C, cnt;
	long long result = 0;
	scanf("%d", &N); //시험장 수 N개
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);//시험장 A에 들어가는 사람수 i
	}
	scanf("%d %d", &B, &C); //총감독 할당 B명 부감독 C명

	for (int i = 1; i <= N; i++) { // 총감독관 필수 제거
		A[i] -= B;
		result++;

		if (A[i] > 0) {
			result += A[i] / C; //부감독수 여러명 가능 몫
			if (A[i] % C > 0) result++; //나머지 남으면 부감독 +1
		}
	}

	printf("%lld", result);

	return 0;
}
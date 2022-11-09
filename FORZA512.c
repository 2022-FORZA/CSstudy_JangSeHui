#include <stdio.h> //포르자 2학기 5주차 19944번 뉴비의 기준은 뭘까?

main() {
	int N, M;
	scanf("%d %d", &N, &M);

	if (M == 1 || M == 2) printf("NEWBIE!");
	else if (M <= N && M > 2) printf("OLDBIE!");
	else printf("TLE!");

	return 0;
}
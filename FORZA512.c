#include <stdio.h> //������ 2�б� 5���� 19944�� ������ ������ ����?

main() {
	int N, M;
	scanf("%d %d", &N, &M);

	if (M == 1 || M == 2) printf("NEWBIE!");
	else if (M <= N && M > 2) printf("OLDBIE!");
	else printf("TLE!");

	return 0;
}
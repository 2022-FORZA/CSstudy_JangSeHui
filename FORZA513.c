#include <stdio.h> //������ 2�б� 5���� 23972�� �Ǹ��� ����

main() {

	long K, N;
	long long result;
	scanf("%ld %ld", &K, &N);

	if (N == 1) printf("-1"); // ���ظ� ���� ��� �и� n-1�� 0�� �� �� ������ ���ظ� ��
	else {
		result = (K * N) / (N - 1);
		if ((K * N) % (N - 1))  // �Ҽ����� ������ ��� +1�� �ؾ���
			result++;

		printf("%lld", result); // �Ҽ����� ������ �ʴ� ��� �״�� ���

		return 0;
	}
}
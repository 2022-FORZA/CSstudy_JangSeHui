#include <stdio.h> //������2�б� 3���� ���� 3059 �������� ���� ������ ��
#include <string.h>
int main() {
    int T, len;
    len = 0;
    char s[1001] = { 0 };
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", s);
        int sum = 0;
        char a[26] = { 0 };
        len = strlen(s);
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < 26; k++) {
                if (s[j] - 65 == k) a[k]++;
            }
        }
        for (int k = 0; k < 26; k++) {
            if (a[k] == 0) sum += (k + 65);
        }
        printf("%d\n", sum);
    }
    return 0;
}
#include <stdio.h>//������ 2�б� 3���� 4766�� �Ϲ� ȭ�� ����
int main() {
    float a, b = 0;
    scanf("%f", &a);
    while (1) {
        scanf("%f", &b);
        if (b == 999) break;
        printf("%.2f\n", b - a);
        a = b;
    }
    return 0;
}
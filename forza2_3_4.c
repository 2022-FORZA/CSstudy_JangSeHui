#include <stdio.h>//포르자 2학기 3주차 4766번 일반 화학 실험
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
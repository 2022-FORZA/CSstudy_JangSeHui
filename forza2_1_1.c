#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    int a, b, seat, cnt;
    int arr[101];
    for (int i = 0; i < num; i++) {
        scanf("%d", &seat);
        if (arr[seat] == 1)
            cnt++;
        arr[seat] = 1;
    }
    printf("%d", cnt);
    return 0;
}
#include<stdio.h>
int main() {
    int age, node, split, leaf;
    while (1) {
        leaf = 1;
        scanf("%d", &age);
        if (!age) return 0;
        for (int i = 0; i < age; i++) {
            scanf(" %d %d", &node, &split);
            leaf = leaf *node - split;
        }
        printf("%d\n", leaf);
    }
}

//ÇöÀç ³ª¹µÀÙ ¼ö=ÇöÀç ³ª¹µÀÙ ¼ö*»ýÀåÁ¡ - °¡ÁöÄ¡±âÇÑ ¼ö
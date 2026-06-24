#include <stdio.h>

int main() {
    int v[8], soma = 0;

    for(int i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("%d\n", soma);
    return 0;
}
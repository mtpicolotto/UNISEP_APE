#include <stdio.h>

int main() {
    int v[10], soma = 0;
    float media;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma / 10.0;

    for(int i = 0; i < 10; i++) {
        if(v[i] > media)
            printf("%d\n", v[i]);
    }

    return 0;
}
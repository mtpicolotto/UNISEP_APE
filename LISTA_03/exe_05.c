#include <stdio.h>

int main() {
    int v[6], menor;

    for(int i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(int i = 1; i < 6; i++) {
        if(v[i] < menor)
            menor = v[i];
    }

    printf("%d\n", menor);
    return 0;
}
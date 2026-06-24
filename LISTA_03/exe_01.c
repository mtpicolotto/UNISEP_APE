#include <stdio.h>

int main() {
    int v[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
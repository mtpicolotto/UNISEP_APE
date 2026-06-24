#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
        printf("E ano de eleicao.\n");
    else
        printf("Nao e ano de eleicao.\n");

    return 0;
}
#include <stdio.h>

int main() {
    float salario, salarioFinal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000)
        salarioFinal = salario * 1.05;
    else
        salarioFinal = salario * 1.10;

    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
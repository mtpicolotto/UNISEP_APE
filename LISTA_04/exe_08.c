float media(int v[], int n) {
    int soma = 0;

    for(int i = 0; i < n; i++) {
        soma += v[i];
    }

    return (float)soma / n;
}
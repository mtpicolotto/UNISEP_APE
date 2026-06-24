void inverter(char v[], int n) {
    int i, j;
    char aux;

    for(i = 0, j = n - 1; i < j; i++, j--) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}
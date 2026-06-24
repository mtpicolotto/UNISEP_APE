int contarVogais(char str[]) {
    int i = 0, cont = 0;

    while(str[i] != '\0') {
        char c = str[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            cont++;
        }

        i++;
    }

    return cont;
}
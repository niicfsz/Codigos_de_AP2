# Questão 3
## Biblioteca usada
```C
#ifndef MAIUSC_H_INCLUDED
#define MAIUSC_H_INCLUDED

void maiuscula(char *f) {
    int i = 0;
    while (f[i] != '\0') {
        f[i] = toupper(f[i]);
        i++;
    }
}

#endif // MAIUSC_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "mauisc.h"

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    maiuscula(frase);

    printf("Frase em maiúsculas: %s\n", frase);

    return 0;
}
```

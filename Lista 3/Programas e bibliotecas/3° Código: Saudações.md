## Biblioteca
```C
#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED

#include <stdio.h>
int horario(int horas) {

    if (horas >= 6 && horas <= 12) {
    } else if (horas > 12 && horas <= 18) {
        printf("Boa tarde!\n");
    } else if ((horas > 18 && horas <= 23) || (horas >= 0 && horas <= 5)) {
        printf("Boa noite!\n");
    } else {
        printf("Digite um valor válido\n");
        return -1;
    }

    return 0;
}

#endif // HORA_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "hora.h"

int main(){

    int valor, horas;

    do{
        printf("Digite uma hora entre 0 e 23: ");
        scanf("%d", &horas);

        valor = horario(horas);
    } while(valor == -1);

    return 0;
}
```

# Main

```C
#include <stdio.h>

void maiusc(){
    char frase[100];
    char *ptr = frase;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    while (*ptr != '\0') {
        *ptr = toupper(*ptr);
        ptr++;
    }

    printf("Nova frase: %s", frase);
}

int main(){
    maiusc();
    return 0;
}
```

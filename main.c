#include <stdio.h>

int main() {
    int numero = 100;

    while (numero >= 2) {
        if (numero % 2 == 0) {
            printf("%d\n", numero);
        }
        numero--;
    }

    return 0;
}

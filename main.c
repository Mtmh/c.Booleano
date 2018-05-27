#include <stdio.h>
#include <stdbool.h>

bool esNumeroPar(int numero)
{
    if (numero % 2 == 0) {
        return true; //1
    }
    return false; //0
}

int main(void)
{
    if (esNumeroPar(5)) {
        printf( "Es par\n");
    }
    else{
        printf("No es par\n");
    }

    return 0;
}

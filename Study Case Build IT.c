#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int bilangan;
    
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("%s\n", "Genap");
    } else {
        printf("%s\n", "Ganjil");
    }

    return 0;
} 
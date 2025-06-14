#include <stdio.h>
#include "div.h"

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
    return (float)a / b;
}

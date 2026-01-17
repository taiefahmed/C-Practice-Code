#include <stdio.h>

int main() {
    int X, P;
    
    scanf("%d %d", &X, &P);

    double original_price = ((double)P * 100) / (100 - (double)X);

    printf("%.2f\n", original_price);
    return 0;
}
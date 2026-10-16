#include <stdio.h>
#include <math.h>

int main() {
    int A, B, alas, tinggi, keliling, luas;

    scanf("%d %d", &A, &B);

    alas = round(sqrt((B * B) - (A * A)));
    tinggi = A;
    keliling = alas + tinggi + B;
    luas = (alas * tinggi) / 2;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}
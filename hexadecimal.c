#include <stdio.h>

int main() {
    int decimalNumber; // Ondalık sayıyı tutacak değişken

    printf("Bir ondalık sayı girin: ");
    scanf("%d", &decimalNumber); // Kullanıcıdan ondalık sayıyı alma

    printf("Onaltılık (Hexadecimal) olarak: %X\n", decimalNumber); // Sayıyı onaltılık olarak ekrana yazdırma

    return 0;
}

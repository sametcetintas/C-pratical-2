#include <stdio.h>

int main() {
    int a, b; // İki tam sayı değişkeni

    int *ptrA, *ptrB; // İşaretçiler (pointer) tanımlama

    ptrA = &a; // a değişkeninin adresini ptrA'ya atama
    ptrB = &b; // b değişkeninin adresini ptrB'ye atama

    *ptrA = 10; // ptrA işaretçisi aracılığıyla a değişkenine değer atama
    *ptrB = 20; // ptrB işaretçisi aracılığıyla b değişkenine değer atama

    printf("a = %d\n", a); // a değişkeninin değerini ekrana yazdırma
    printf("b = %d\n", b); // b değişkeninin değerini ekrana yazdırma

    return 0;
}

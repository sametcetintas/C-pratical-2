#include <stdio.h>

int main() {
    FILE *dosya; // Dosya işaretçisi
    char metin[100]; // Metin dizisi

    // Dosyayı yazma modunda açma
    dosya = fopen("metin.txt", "w");

    if (dosya == NULL) {
        printf("Dosya oluşturulamadı.");
        return 1;
    }

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin); // Kullanıcıdan metni al

    fprintf(dosya, "%s", metin); // Dosyaya metni yaz

    fclose(dosya); // Dosyayı kapat

    // Dosyayı okuma modunda açma
    dosya = fopen("metin.txt", "r");

    if (dosya == NULL) {
        printf("Dosya açılamadı.");
        return 1;
    }

    printf("Dosyadan okunan metin:\n");

    // Dosyayı satır satır okuyarak ekrana yazdır
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    fclose(dosya); // Dosyayı kapat

    return 0;
}

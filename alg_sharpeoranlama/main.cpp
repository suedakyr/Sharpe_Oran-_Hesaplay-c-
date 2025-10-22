#include <stdio.h>

int main() {
    double yatirimGetirisi;
    double risksizFaizOrani;
    double standartSapma;
    double sharpeOrani;


    int girisDurumu;

    printf("--- Sharpe Oranı Hesaplayıcı ---\n");


    printf("Lütfen yatırım getirisini girin : ");

    while ( (girisDurumu = scanf("%lf", &yatirimGetirisi)) != 1 ) {


        while (getchar() != '\n');

        printf("HATA: Lütfen geçerli bir sayı girin (örn: 10.5 veya 8): ");
    }


    printf("Lütfen risksiz faiz oranını girin : ");
    while ( (girisDurumu = scanf("%lf", &risksizFaizOrani)) != 1 ) {
        while (getchar() != '\n');
        printf("HATA: Lütfen geçerli bir sayı girin (örn: 2.5 veya 3): ");
    }

    printf("Lütfen portföyün standart sapmasını girin : ");
    while ( (girisDurumu = scanf("%lf", &standartSapma)) != 1 ) {
        while (getchar() != '\n');
        printf("HATA: Lütfen geçerli bir sayı girin (örn: 1.2 veya 5): ");
    }

    if (standartSapma == 0.0) {
        printf("\nHATA: Standart sapma 0 olamaz. Hesaplama yapılamıyor.\n");
        return 1;
    }


    sharpeOrani = (yatirimGetirisi - risksizFaizOrani) / standartSapma;


    printf("\n--- Sonuçlar ---\n");
    printf("Hesaplanan Sharpe Oranı: %.2f\n", sharpeOrani);

    if (sharpeOrani >= 3.0) {
        printf("Değerlendirme: Mükemmel!\n");
    } else if (sharpeOrani >= 2.0) {
        printf("Değerlendirme: Çok İyi\n");
    } else if (sharpeOrani >= 1.0) {
        printf("Değerlendirme: İyi\n");
    } else if (sharpeOrani == 0.0) {
        printf("Değerlendirme: Sıfır\n");
    } else {
        printf("Değerlendirme: Yeterince verimli değil (1.0'ın altında).\n");
    }

    return 0;
}

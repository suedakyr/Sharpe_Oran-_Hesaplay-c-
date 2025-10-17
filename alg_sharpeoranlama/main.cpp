#include <iostream>
#include  <stdio.h>

int main() {
    double yatirimGetirisi;
    double risksizFaizOrani;
    double standartSapma;
    double sharpeOrani;


    printf("--- Sharpe Oranı Hesaplayıcı ---\n");


    printf("Lütfen yatırım getirisini girin : ");
    scanf("%lf", &yatirimGetirisi);

    printf("Lütfen risksiz faiz oranını girin : ");
    scanf("%lf", &risksizFaizOrani);

    printf("Lütfen portföyün standart sapmasını  girin : ");
    scanf("%lf", &standartSapma);




        sharpeOrani = (yatirimGetirisi - risksizFaizOrani) / standartSapma;



        printf("\n--- Sonuçlar ---\n");
        printf("Hesaplanan Sharpe Oranı: %.2f\n", sharpeOrani);


        if (sharpeOrani >= 3.0) {
            printf("Değerlendirme: Mükemmel!\n");
        } else if (sharpeOrani >= 2.0) {
            printf("Değerlendirme: Çok İyi\n");
        } else if (sharpeOrani >= 1.0) {
            printf("Değerlendirme: İyi\n");
        }else if (sharpeOrani  == 0.0){
            printf("Değerlendirme:Sıfır\n");
        } else {
            printf("Değerlendirme: Yeterince verimli değil (1.0'ın altında).\n");
        }


    return 0;
}

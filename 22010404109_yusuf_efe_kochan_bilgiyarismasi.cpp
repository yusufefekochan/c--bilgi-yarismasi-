//Bilgi Yarismasi
#include <stdio.h>

int main() {
    printf("Soru 1: 'Atesten Gomlegi' kim yazmistir?\n");
    printf("A) Sertab Erener\n");
    printf("B) Halide Edip Adivar\n");
    printf("C) Huseyin Yildirim\n");
    printf("D) Atakan Karakoc\n");
    
    char cevap1;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap1);
    
    printf("\nSoru 2: C dilinde 'scanf' fonksiyonu ne ise yarar?\n");
    printf("A) Ekrandan veri okur\n");
    printf("B) Bellek tahsis eder\n");
    printf("C) Ekrani temizler\n");
    printf("D) Dosya olusturur\n");
    
    char cevap2;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap2);
    
    printf("\nSoru 3: Tsunami felaketinde en cok zarar goren guney asya ulkesi hangisidir?\n");
    printf("A) Endonezya\n");
    printf("B) Srilanka\n");
    printf("C) Tayland\n");
    printf("D) Hindistan\n");
    
    char cevap3;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap3);
    
    printf("\nSoru 4: Dunya saglik orgutunun kisaltilmis ismi hangisidir?\n");
    printf("A) UHW\n");
    printf("B) UNICEF\n");
    printf("C) WHO\n");
    printf("D) NATO\n");
    
    char cevap4;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap4);
    
    printf("\nSoru 5: Bir gun kac saniyedir?\n");
    printf("A) 86000\n");
    printf("B) 88600\n");
    printf("C) 84800\n");
    printf("D) 86400\n");
    
    char cevap5;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap5);
    
    printf("\nSoru 6: 3 buyuk dince kutsal sayilan sehir hangisidir?\n");
    printf("A) Mekke\n");
    printf("B) Kudus\n");
    printf("C) Roma\n");
    printf("D) Istanbul\n");
    
    char cevap6;
    printf("Cevabinizi girin (A/B/C/D): ");
    scanf(" %c", &cevap6);
    
    int dogruCevapSayisi = 0;
    
    if (cevap1 == 'B' || cevap1 == 'b') {
        printf("Soru 1 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 1 icin yanlis cevap. Dogru cevap 'Halide Edip Adivar'.\n");
    }
    
    if (cevap2 == 'A' || cevap2 == 'a') {
        printf("Soru 2 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 2 icin yanlis cevap. Dogru cevap 'ekrandan veri okur'.\n");
    }
    
    if (cevap3 == 'A' || cevap3 == 'a') {
        printf("Soru 3 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 3 icin yanlis cevap. Dogru cevap 'Endonezya'.\n");
    }
    
    if (cevap4 == 'C' || cevap4 == 'c') {
        printf("Soru 4 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 4 icin yanlis cevap. Dogru cevap 'WHO'.\n");
    }
    
    if (cevap5 == 'D' || cevap5 == 'd') {
        printf("Soru 5 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 5 icin yanlis cevap. Dogru cevap '86400'.\n");
    }
    
    if (cevap6 == 'B' || cevap6 == 'b') {
        printf("Soru 6 icin dogru cevap! Tebrikler.\n");
        dogruCevapSayisi++;
    } else {
        printf("Soru 6 icin yanlis cevap. Dogru cevap 'Kudus'.\n");
    }
    
    printf("\nToplam dogru cevap sayisi: %d\n", dogruCevapSayisi);
    
    getchar();
getchar();

    return 0;
}

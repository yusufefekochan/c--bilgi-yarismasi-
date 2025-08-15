

🧠 C++ Konsol Bilgi Yarışması
Bu depo, C++ ile geliştirilmiş basit bir komut satırı bilgi yarışması oyununu içermektedir. Proje, temel C++ programlama becerilerini (değişkenler, döngüler, koşullu ifadeler, fonksiyonlar ve temel giriş/çıkış işlemleri) pekiştirmek amacıyla bir öğrenme projesi olarak tasarlanmıştır.

  Proje için akış diyagramı ve c++ ortamında kod yazılmıştır. Detaylı bilgiler için depo içerisindeki klasörlere bakabilirsiniz. 


🎮 Özellikler
Çoktan Seçmeli Sorular: Kullanıcıya sunulan dört seçenekli sorular.

Puanlama Sistemi: Doğru cevaplar için puan kazancı.

Geri Dönüş: Sorulara verilen cevapların doğru olup olmadığı, yanlış ise verilmesi gereken doğru cevabı belirtmektedir.

Basit Arayüz: Konsol tabanlı, kullanıcı dostu basit bir metin arayüzü.



💻 Kullanılan Teknolojiler
Programlama Dili: C++

Geliştirme Ortamı: Dev-C++

Derleyici: TDM-GCC

 // AKIŞ DİYAGRAMI FOTOĞRAFLARI 

 1. soru için : <img width="889" height="772" alt="soru1" src="https://github.com/user-attachments/assets/602c0d21-23e1-498a-986d-e5f2c8b3aaaa" />

 2. soru için : <img width="986" height="765" alt="soru2" src="https://github.com/user-attachments/assets/753c75db-a5e6-4ead-931c-1aaba16c7ec7" />

 3. soru için : <img width="961" height="750" alt="soru3" src="https://github.com/user-attachments/assets/8285d62f-1adc-4cf8-bfdf-3a47b57a357b" />

 4. soru için : <img width="928" height="760" alt="soru4" src="https://github.com/user-attachments/assets/89d74342-57c0-4c75-a28a-5da072e88f5b" />

 5. soru için : <img width="962" height="708" alt="soru5" src="https://github.com/user-attachments/assets/e35fc592-9f4a-4abe-9e39-e959223bb05e" />

 6. soru için : <img width="974" height="735" alt="soru6" src="https://github.com/user-attachments/assets/8017b0a8-d18a-4789-87a9-feecc079568e" />

 


// C++ ORTAMINDA YAZILAN KODUN FOTOĞRAFLARI 


1 İLE 30. SATIR ARASI : <img width="1528" height="989" alt="1 3" src="https://github.com/user-attachments/assets/5c9b7ad0-fb0a-4223-a06e-df4665590f17" />


30 İLE 60. SATIR ARASI : <img width="1709" height="1002" alt="3 6" src="https://github.com/user-attachments/assets/55d9e535-2661-4476-878a-fde45b4cf7f4" />


60 İLE 90. SATIR ARASI : <img width="1920" height="1080" alt="6 9" src="https://github.com/user-attachments/assets/4f8ee03f-e13d-4cb9-83f6-96d786661c45" />


90 İİLE 110. SATIR ARASI :<img width="1589" height="1033" alt="9 11" src="https://github.com/user-attachments/assets/cea6e364-d50e-4bf0-af0d-59048eab3dc9" />



F11 İLE ÇALIŞTIRIP İSTEDİĞİNİZ CEVAPARI VERDİKTEN SONRA GELEN SONUÇ ARAYÜZÜ : <img width="535" height="154" alt="sonuclar" src="https://github.com/user-attachments/assets/d3174ce5-4197-4206-9de9-4177bb965eb5" />



C++ ORTAMINDA YAZILAN KOD : 

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



🚀 Kurulum ve Kullanım
Bu projeyi yerel makinenizde çalıştırmak oldukça basittir.

Dosyaların arasına eklediğim kod için hazırlanmış metin belgesini derleyicinizde çalıştırarak siz de kullanabilirsiniz.



📈 Gelecek Planları

Daha fazla soru eklemek ve soruları harici bir dosyadan (örneğin .txt veya .csv) okumak.

+Zorluk seviyeleri (Kolay, Orta, Zor) eklemek.

+Süre sınırı veya can sistemi getirmek.

+Soruları karıştırmak için rastgele bir sıralama algoritması kullanmak.


📄 Lisans
Bu proje, Öğrenme amaçlı bir proje olduğu için size en basit ve en yaygın kullanılan lisanslardan biri olan MIT Lisansı altında lisanslanmıştır. 

✍️ Katkıda Bulunma
Projenin geliştirilmesine katkıda bulunmaktan memnuniyet duyarım! Bir hata bulursanız veya yeni bir özellik eklemek isterseniz, lütfen bir "issue" açın veya bir "pull request" gönderin.

// İLETİŞİM İÇİN : 


 E-posta : yusufefekochan@hotmail.com

 Linkedin : https://www.linkedin.com/in/yusufefekochan

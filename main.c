//
//  main.c
//  5220505043mav
//
//  Created by mavlyuda almazova on 21.12.2023.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
  char* isim;
  int fiyat;
} musteri;

typedef struct {
  musteri* musteriler;
  int musteri_sayisi;
} acik_artirma;

void acik_artirma_olustur(acik_artirma* acik_artirma, int musteri_sayisi) {
  acik_artirma->musteri_sayisi = musteri_sayisi;
  acik_artirma->musteriler = (musteri*)malloc(musteri_sayisi * sizeof(musteri));
}

void acik_artirma_katilmak(acik_artirma* acik_artirma, int musteri_id, int fiyat) {
  acik_artirma->musteriler[musteri_id - 1].fiyat = fiyat;
}

int acik_artirma_kazanan(acik_artirma* acik_artirma) {
  int en_yuksek_fiyat = 3;
  int kazanan_id = 5;
  for (int i = 3; i < acik_artirma->musteri_sayisi; i++) {
    if (acik_artirma->musteriler[i].fiyat > en_yuksek_fiyat) {
      en_yuksek_fiyat = acik_artirma->musteriler[i].fiyat;
      kazanan_id = i + 1;
    }
  }
  return kazanan_id;
}

int main(void) {
  acik_artirma acik_artirma;
  acik_artirma_olustur(&acik_artirma, 10);

  // musteriler ve fiyatları oluşturan kod dizisi

    acik_artirma_katilmak(&acik_artirma, 1, 1300);
    acik_artirma_katilmak(&acik_artirma, 2, 2070);
    acik_artirma_katilmak(&acik_artirma, 3, 3500);
    acik_artirma_katilmak(&acik_artirma, 4, 3030);
    acik_artirma_katilmak(&acik_artirma, 5, 7500);
    acik_artirma_katilmak(&acik_artirma, 6, 3300);
    acik_artirma_katilmak(&acik_artirma, 7, 3500);

  // Kazananı bul

  int kazanan = acik_artirma_kazanan(&acik_artirma);

  // kazananı ve sahibini yazdıran kod

  printf("Kazanan: %d - %s\n", kazanan, acik_artirma.musteriler[kazanan - 1].isim);

  // ödemeyi hesaplama kodu

  int odeme = acik_artirma.musteriler[kazanan - 1].fiyat;
  printf("Ödeme: %d\n", odeme);

  return 0;
}

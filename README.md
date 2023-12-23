Özel tanımlanmış typedef struct da ihalede kazanan açık artırma C programı yapıyoruz:

   - `musteri* musteriler {int musteri_sayisi;}` typedef struct'la açık artırma ihalesinde müşteri ve müşteri sayısını giriyoruz,
   - `void acik_artirma_olustur`açık artırmayı başlatıyoruz,
   - `acik_artirma->musteriler = (musteri*)malloc(musteri_sayisi * sizeof(musteri))`müşterileri ve müşteri sayısını giriyoruz ve müşteriyi gösteriyoruz,
   - `void acik_artirma_katilmak(acik_artirma* acik_artirma, int musteri_id, int fiyat)` açık artırmaya katılacakları ve fiyat listesini çıkarıyoruz,
   - `int acik_artirma_kazanan(acik_artirma* acik_artirma) {
  int en_yuksek_fiyat = 3;
  int kazanan_id = 5;` açık artırmada kazananı ve en yüksek fiyatı belirliyoruz,
 - `acik_artirma_katilmak(&acik_artirma, 1, 1300)`müşteri fıyatlarını 1,2,3,4... olarak giriyoruz ve açık artırmayı başlatıyoruz,
 - `int kazanan = acik_artirma_kazanan(&acik_artirma)` kazananı açıklıyoruz,
 -  `printf("Kazanan: %d - %s\n", kazanan, acik_artirma.musteriler[kazanan - 1].isim)` kazanan hangi müşteriyse onun ismini yazdırıyoruz;
 -`int odeme = acik_artirma.musteriler[kazanan - 1].fiyat;
  printf("Ödeme: %d\n", odeme);`ödemeyi fiyatı açıklıyoruz,

Ödemeyi fiyatı açıklıyoruz:
  -`int odeme = acik_artirma.musteriler[kazanan - 1].fiyat;
  printf("Ödeme: %d\n", odeme);`açık artırma kazananı burada bitiriyoruz.
  
Ekran çıktısı bu şekilde olur.

    Kazanan: 5 - (null)
    Ödeme: 7500
veya 

 `Program ended with exit code: 0`

çıktını verir.













#ifndef TAHTA_H
#define TAHTA_H
#include <string>
#include <Dosya.h>
#include<Tas.h>


class Tahta : public Tas
{
    public:

        Tahta();
        virtual ~Tahta();

        std::string tahta[8][8]; // Satranc tahtasi

        void taslari_belirle(std::string dizi[][8]);
        int** tahta_isaretle(Tas& tas,int i,int j,int** gelendizi);  // Taslarin hareketlerini isaretleyen fonksiyon prototipi
        int** getArray();                                            // 2D pointer matris olusturma fonksiyonu prototip
        int** beyaz_dizi = getArray();                               // Beyaz takimin hareketlerinin isaretlendigi dizi;
        int** siyah_dizi = getArray();                               // Siyah takimin hareketlerinin isaretlendigi dizi;
        int** doldur_beyaz = getArray();
        int** doldur_siyah = getArray();                             // Beyaz ve siyah takimin hareket isaretlemesini yapmak icin gonderilen diziler


        int rows =  sizeof tahta / sizeof  tahta[0];
        int cols = sizeof tahta[0] / sizeof(int) / 6;       // Satranc tahtasinin sutun ve satirlari

    protected:

    private:

};

#endif // TAHTA_H

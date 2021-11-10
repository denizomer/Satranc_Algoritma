#include "Dosya.h"
#include <iostream>
#include <string>
#include <fstream>

Dosya::Dosya()
{
    //ctor
}

Dosya::~Dosya()
{
    //dtor
}

std::string Dosya::dosyadanOku(std::string dizi[][8]){

    // verilen txt dosyasindan metinleri okuyarak, tahta adinda cok boyutlu bir matris olusturur.
    std::ifstream dosya;
    std::string satir;
    int satirSayisi = 8, sutunSayisi=8;

    dosya.open("C:\\Users\\deniz\\Desktop\\C Dersi\\Satranc_v3\\test.txt");

    for(int i =0; i<sutunSayisi; i++){

        for(int j =0 ; j<satirSayisi ; j++){

            dosya >> dizi[i][j];    // TXT metnindeki her index tek tek okunur ve 2D diziye atilir.



        }

    }

    dosya.close();


    // okuma islemi tamamlanmistir



    }




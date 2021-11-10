#include "Tahta.h"
#include <iostream>
#include<string>
#include <Dosya.h>
#include<Tas.h>
#include <Kale.h>
#include<At.h>
#include<Fil.h>
#include<Vezir.h>
#include<Sah.h>
#include<Piyon.h>
using namespace std;

Tahta::Tahta()
{
    //ctor


}

Tahta::~Tahta()
{
    //dtor
}
Tas tas;
Kale kale;
At att;
Fil fil;
Vezir vezir;
Sah sah;
Piyon piyon;

int** Tahta::getArray(){          //2 boyutlu pointer dizisi olusturan fonksiyon acilimi

    int** arr = new int*[8];
        for(int j =0;j<8;j++){
            arr[j] = new int[8];

        }
        for(int i=0;i<8;i++){
            for(int h=0;h <8;h++){
                arr[i][h] =0;
            }
        }

    return arr;

}

int ** Tahta::tahta_isaretle(Tas& tas,int i, int j,int** gelendizi){          //her tas'in hareket edebilecegi indexler 1 ile isaretlenir.



    if(tas.ad == "beyaz_sah"){

        sah.yetenek(tas,i,j,gelendizi);
        // Beyaz Şah'ın gidebileceği alanlar dolduruldu , bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "siyah_sah"){

        sah.yetenek(tas,i,j,gelendizi);
        // Siyah Şah'ın gidebileceği alanlar dolduruldu , bu alanlar üzerinde olan beyaz taşlar tehdit altındadır ve puanları kırılacaktır.

    }
    if(tas.ad == "beyaz_kale"){

       kale.yetenek(tas,i,j,gelendizi);
        // Beyaz kale'nin gidebileceği alanlar dolduruldu , bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "siyah_kale"){

        kale.yetenek(tas,i,j,gelendizi);
        // Siyah kale'nin gidebileceği alanlar dolduruldu , bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "beyaz_at"){

         att.yetenek(tas,i,j,gelendizi);
        // Beyaz atlı'nın gidebileceği alanlar / indexler işaretlendi, bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "siyah_at"){

         att.yetenek(tas,i,j,gelendizi);
        //Siyah atlı'nın gidebileceği alanlar / indexler işaretlendi.,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "beyaz_fil"){

        fil.yetenek(tas,i,j,gelendizi);
        // Beyaz Fil'in hareket edebileceği alanlar /indexler işaretlenir, bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad=="siyah_fil"){

        fil.yetenek(tas,i,j,gelendizi);
        // Siyah fil'in hareket edebileceği alanlar / indexler ,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.

    }

    if(tas.ad == "beyaz_vezir"){

        vezir.yetenek(tas,i,j,gelendizi);
        //beyaz vezir'in hareket edebileceği alanlar ,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.


    }

    if(tas.ad == "siyah_vezir"){

        vezir.yetenek(tas,i,j,gelendizi);
        //siyah vezir'in hareket edebileceği alanlar,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.


    if(tas.ad == "beyaz_piyon"){

        //beyaz piyon'in hareket edebileceği alanlar ,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.
        piyon.yetenek(tas,i,j,gelendizi);


    }

    if(tas.ad == "siyah_piyon"){
        //siyah piyon'in hareket edebileceği alanlar ,bu alanlar üzerinde olan siyah taşlar tehdit altındadır ve puanları kırılacaktır.
        piyon.yetenek(tas,i,j,gelendizi);
    }




     }
return (gelendizi);
}



void Tahta::taslari_belirle(string tahta[][8]){



    for(int i =0;i<rows;i++){

        for(int j=0;j<cols;j++){

             if(tahta[i][j] == "kb"){
                tas.x=i;
                tas.y=j; // beyaz kale konum tespiti yapıldı.

                tas.renk=Tas::beyaz; // kale renk atamasi yapildi
                tas.ad = "beyaz_kale";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                cout <<tas.ad <<" ";


            }

            else if(tahta[i][j] == "ks"){
                tas.x = i;
                tas.y = j; // siyah kale konum tespit edildi.

                tas.renk = Tas::siyah; // kale renk atamasi yapildi.
                tas.ad = "siyah_kale";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                cout <<tas.ad <<" ";
            }


            else if(tahta[i][j] == "ab"){
               tas.x = i;
               tas.y = j; // beyaz at konum tespiti yapıldı.

                tas.renk = Tas::beyaz; // at renk atamasi yapildi
                tas.ad = "beyaz_at";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                 cout <<tas.ad <<" ";

            }

            else if(tahta[i][j] == "as"){
                tas.x = i;
                tas.y = j; // siyah at konum tespiti yapıldı.

                tas.renk = Tas::siyah; // at renk atamasi yapildi.
                tas.ad = "siyah_at";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                cout <<tas.ad <<" ";


            }
            else if(tahta[i][j] == "fb"){
                tas.x = i;
                tas.y = j; // beyaz fil konum tespiti yapıldı.

                tas.renk = Tas::beyaz; // fil renk atamasi yapildi
                tas.ad = "beyaz_fil";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                cout <<tas.ad <<" ";

            }
             else if(tahta[i][j] == "fs"){
                tas.x = i;
                tas.y = j; // siyah fil konum tespiti yapıldı.

                tas.renk = Tas::siyah; // fil renk atamasi yapildi.
                tas.ad = "siyah_fil";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                cout <<tas.ad <<" ";


            }
            else if(tahta[i][j] == "vb"){
                tas.x = i;
                tas.y = j; // beyaz vezir konum tespiti yapıldı.

                tas.renk = Tas::beyaz; // vezir renk atamasi yapildi
                tas.ad = "beyaz_vezir";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                cout <<tas.ad <<" ";

            }
            else if(tahta[i][j] == "vs"){
                tas.x = i;
                tas.y = j; // siyah vezir konum tespiti yapıldı.

                tas.renk =Tas::siyah; // vezir renk atamasi yapildi.
                tas.ad = "siyah_vezir";

                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                cout <<tas.ad <<" ";

            }
            else if(tahta[i][j] == "pb"){
                tas.x = i;
                tas.y = j; // beyaz piyon konum tespiti yapıldı.

                tas.renk = Tas::beyaz; // piyon renk atamasi yapildi
                tas.ad = "beyaz_piyon";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                cout <<tas.ad <<" ";

            }
            else if(tahta[i][j] == "ps"){
                tas.x = i;
                tas.y = j; // siyah piyon konum tespiti yapıldı.

                tas.renk = Tas::siyah; // piyon renk atamasi yapildi.
                tas.ad = "siyah_piyon";

                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                cout <<tas.ad <<" ";



            }

            else if(tahta[i][j] == "sb"){
                tas.x=i;
                tas.y=j;   // beyaz sah konum tespiti yapýldý.

                tas.renk=Tas::beyaz;  // sah renk atamasi yapildi.
                tas.ad= "beyaz_sah";

                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.
                beyaz_dizi = tahta_isaretle(tas,i,j,doldur_beyaz);
                cout <<tas.ad <<" ";

            }

            else if(tahta[i][j]=="ss"){
                tas.x=i;
                tas.y=j;   // siyah sah konum tespiti yapýldý.

                tas.renk= Tas::siyah;  // sah renk atamasi yapildi.
                tas.ad = "siyah_sah";

                siyah_dizi = tahta_isaretle(tas,i,j,doldur_siyah);
                cout <<tas.ad <<" ";
                // her tas tespitinde taslar, gidebileceği alanlar isaretlenmek üzere fonksiyona gönderilir.

            }
            else {
                cout <<"--"<<" ";
            }

            /***************************************************************/


        }
        cout <<endl;
    }
}






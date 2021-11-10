#include <iostream>
#include "Dosya.h"
#include "Tahta.h"
#include "Tas.h"
#include "Kale.h"
#include "At.h"
#include "Fil.h"
#include "Vezir.h"
#include "Sah.h"
#include "Piyon.h"

using namespace std;

int main()
{
    Tahta tahta;
    Dosya dosya;


    dosya.dosyadanOku(tahta.tahta); // txt'den okunan veriler ile Satranc tahtasi olusturuldu
    tahta.taslari_belirle(tahta.tahta); // Taslar turune ve rengine gore ayrilir. Daha sonra baska bir fonksiyon icerisinde her tas'in hareket edebilecegi
                                        // indexler 1 ile isaretlenir. 2 takim icin 2 ayri matriste isaretleme yapilir.


cout <<endl;


// isaretlenmis ornek dizi
cout << "**BEYAZ TAKIM HAREKET ALANLARI**"<<endl;
for ( int a=0; a<8;a++){
    for(int b=0; b<8 ; b++){

        cout << tahta.beyaz_dizi[a][b]<<" ";  // Beyaz takimin isaret bilgilerinin tutuldugu dizi ( 1 ile doldurulan indexler isaretli anlamýna gelmektedir)


    }
    cout <<endl;

}



    return 0;
}

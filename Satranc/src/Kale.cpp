#include "Kale.h"

Kale::Kale()
{

}
Kale::~Kale()
{
    //dtor
}
void Kale::yetenek(Tas& tas,int i, int j, int** gelendizi ){

    if(tas.ad=="beyaz_kale"){


        for(int k = i;k<8;k++){           //Beyaz Kale'nin bulundugu i ve j konumlari baz alinarak yatayda ve dikeyde tahta boyunca indexler isaretlenir.
            gelendizi[k][j] = 1;
            }
        for(int h = i;h>0;h--){
            gelendizi[h][j] = 1;
            }
        for(int f = j;f<8;f++){
            gelendizi[i][f] = 1;
            }
        for(int p = j;p>0;p--){
            gelendizi[i][p] = 1;
            }
    }
    else if(tas.ad == "siyah_kale"){

        for(int k = i;k<8;k++){
            gelendizi[k][j] = 1;            //Siyah Kale'nin bulundugu i ve j konumlari baz alinarak yatayda ve dikeyde tahta boyunca indexler isaretlenir.
            }
        for(int h = i;h>0;h--){
            gelendizi[h][j] = 1;
            }
        for(int f = j;f<8;f++){
            gelendizi[i][f] = 1;
            }
        for(int p = j;p>0;p--){
            gelendizi[i][p] = 1;
            }
    }
    else {
        std::cout<<" ERROR! ";
    }




}

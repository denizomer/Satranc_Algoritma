#include "Piyon.h"

Piyon::Piyon()
{
    //ctor
}

Piyon::~Piyon()
{
    //dtor
}


void Piyon::yetenek(Tas& tas,int i, int j, int** gelendizi ){

    if(tas.ad == "beyaz_piyon"){                    //Beyaz Piyon'un bulundugu i ve j konumlari baz alinarak hareket edebilecegi alanlar isaretlenir.

         gelendizi[i-1][j-1] = 1; gelendizi[i-1][j+1];
    }

    else if(tas.ad == "siyah_piyon"){

        gelendizi[i+1][j-1] = 1; gelendizi[i+1][j+1]; //Beyaz Piyon'un bulundugu i ve j konumlari baz alinarak hareket edebilecegi alanlar isaretlenir.
    }

    else {
        std::cout <<" ERROR! ";
    }


}



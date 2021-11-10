#include "Sah.h"

Sah::Sah()
{
    //ctor
}

Sah::~Sah()
{
    //dtor
}

void Sah::yetenek(Tas& tas,int i, int j, int** gelendizi ){


    if(tas.ad=="beyaz_sah"){  // Beyaz SAH'ın bulundugu konumdan hareket edebileceği alanlar isaretleniyor.


        if(i==7 && (j!=0 || j !=7)){            // index taþmalarýný önlemek için kontroller

            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1;gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1;
            gelendizi[i-1][j] = 1; gelendizi[i-1][j+1] = 1;

        }
        else if(i==0 && (j!=0 || j!=7)){         // index taþmalarýný önlemek için kontroller
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i+1][j-1] = 1; gelendizi[i][j-1] = 1;
        }
        else if(j==7 && (i!=0 || i!=7)){               // index taþmalarýný önlemek için kontroller
           gelendizi[i][j] = 1;  gelendizi[i+1][j] = 1;gelendizi[i+1][j-1] = 1;
            gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1; gelendizi[i-1][j] = 1;
        }
        else if(j==0 && (i!=0 || i!=7)){          // index taþmalarýný önlemek için kontroller
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i-1][j] = 1; gelendizi[i-1][j+1] = 1;
        }
        else if(i!=7 && i!=0 && j!=7 && j!=0){         // bu þartlar varsa index taþma yoktur, tüm alanlarý iþaretle
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i+1][j-1] = 1; gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1; gelendizi[i-1][j] = 1;
            gelendizi[i-1][j+1] = 1;
        }

        // Beyaz Sah'in gidebileceði alanlar dolduruldu , bu alanlar üzerinde olan siyah taslar tehdit altindadir ve puanlari kirilacaktir.
    }
    else if(tas.ad == "siyah_sah"){ // Siyah SAH'in bulundugu konumdan hareket edebileceği alanlar isaretleniyor.


        if(i==7 && (j!=0 || j !=7)){              // index tasmalarini onlemek için kontroller
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1;
            gelendizi[i-1][j] = 1; gelendizi[i-1][j+1] = 1;
        }
        else if(i==0 && (j!=0 || j!=7)){          // index taþmalarýný önlemek için kontroller
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i+1][j-1] = 1; gelendizi[i][j-1] = 1;
        }
        else if(j==7 && (i!=0 || i!=7)){               // index taþmalarýný önlemek için kontroller
            gelendizi[i][j] = 1;  gelendizi[i+1][j] = 1; gelendizi[i+1][j-1] = 1;
            gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1; gelendizi[i-1][j] = 1;
        }
        else if(j==0 && (i!=0 || i!=7)){          // index taþmalarýný önlemek için kontroller
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i-1][j] = 1; gelendizi[i-1][j+1] = 1;
        }
        else if(i!=7 && i!=0 && j!=7 && j!=0){         // bu þartlar varsa index taþma yoktur, tüm alanlarý iþaretle
            gelendizi[i][j] = 1; gelendizi[i][j+1] = 1; gelendizi[i+1][j+1] = 1; gelendizi[i+1][j] = 1;
            gelendizi[i+1][j-1] = 1; gelendizi[i][j-1] = 1; gelendizi[i-1][j-1] = 1;gelendizi[i-1][j] = 1;
            gelendizi[i-1][j+1] = 1;

            // Siyah Sah'in gidebileceði alanlar dolduruldu , bu alanlar üzerinde olan beyaz taslar tehdit altýndadýr ve puanlarý kýrýlacaktýr.
        }
     else {
        std::cout <<" ERROR! ";
     }


    }

}

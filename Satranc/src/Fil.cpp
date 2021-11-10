#include "Fil.h"

Fil::Fil()
{
    //ctor
}

Fil::~Fil()
{
    //dtor
}


void Fil::yetenek(Tas& tas,int i, int j, int** gelendizi ){

    if(tas.ad == "beyaz_fil"){

        if(i>=0 && j>=0 && i<=7 && j<=7){

        // Fil'in matris düzlemine göre 4 çeþit hareketi vardir.
        //X VE Y koordinatlarý için   (+ / +), (+ / -),(- / +) , (- / - )
        //Matris üzerinde köþe noktalar ve diðer kalan noktalara göre hareket yönlendirmeleri yapýlýr.
        // Bu Yönlerin belirlenmesi sonucu; her yön için hareket sayýlarý hesaplanýr ve indexler iþaretlenir.

        if(j==0 && i!=0 && i!=7 ){     // Sadece sola hareket edemeyecek // Dolayýsýyla izin verilen hareket yönleri : sag yukarý - sag asagý

            int tn = (i-j); // sSag yukarý hareketi için hareket sayýsý tn(top number) olarak belirlendi
            int bn = (7-tn); // sag asagý hareket sayýsý bn ( bottom number) olarak belirlendi

            for(int k=1;k<=tn;k++){ // tn kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukarý hareketler iþaretlendi
                    }
            for(int k=1;k<=bn;k++){ // bn kadar tekrar edilir.
                gelendizi[i+k][j+k] = 1; // sag asagý hareketler isaretlendi
                    }
                }


        else if(j==0 && i==0){ // Hem sola Hem yukarý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : sag asagý

            for(int k =1;k<8;k++){
                gelendizi[i+k][j+k] =1; // sag asagý yönde tum tahta boyunca iþaretlenir.
            }

        }
        else if(j==0 && i==7){ // Hem sola Hem asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : sag yukarý

            for(int k =1;k<8;k++){
                gelendizi[i-k][j+k]=1; // sag yukarý yönde tum tahta boyunca iþaretlenir.
            }

        }
        else if(i==0 && j!=0 && j!=7){ // sadece Yukarý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol asagý - sag asagý
            int rb=(7-j); // sag asagý hareketi için hareket sayýsý Rb( right bottom) olarak belirlendi
            int Lb =(j-i); // sol asagý hareketi için hareket sayýsý Lb( left bottom) olarak belirlendi

            for(int k=1;k<=rb;k++){ // rb kadar tekrar edilir.
                gelendizi[i+k][j+k] =1; // sag asagý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lb;k++){ //Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] = 1; // sol asagý hareketler isaretlendi
                    }

        }

        else if(i==0 && j==7){ // Hem Yukarý hem saga haraket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol asagý
             for(int k =1;k<8;k++){
                gelendizi[i+k][j-k]=1; // sol asagý yönde tum tahta boyunca iþaretlenir.
            }
        }
        else if(j==7 && i!= 0 && i!=0){ // Sadece Saga Hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol yukarý - Sol asagý
            int Lb = (j-i); // sol asagý hareketi için hareket sayýsý Lb(left bottom) olarak belirlendi
            int Lt = (7-Lb); // sol yukarý hareket sayýsý bn ( bottom number) olarak belirlendi

            for(int k=1;k<=Lb;k++){ // Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] =1; // sol asagý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukarý hareketler isaretlendi
                    }
        }

        else if(j==7 && i==7){ // Hem saga Hem asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol yukarý
             for(int k =1;k<8;k++){
                gelendizi[i-k][j-k]=1; // sol yukarý yönde tum tahta boyunca iþaretlenir.
            }
        }
        else if ( i==7 && j!=0 && j!=7){ // Sadece Asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol Yukarý - Sag Yukarý

            int rt=(7-j); // sag yukarý hareketi için hareket sayýsý rt( right top) olarak belirlendi
            int Lt =(7-rt); // sol yukarý hareketi için hareket sayýsý Lt( left top) olarak belirlendi

            for(int k=1;k<=rt;k++){ // rt kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukarý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukarý hareketler isaretlendi
                    }



        }

        }
    }

    else if(tas.ad=="siyah_fil"){

        if(i>=0 && j>=0 && i<=7 && j<=7){

        // Fil'in matris düzlemine göre 4 çeþit hareketi vardir.
        //X VE Y koordinatlarý için   (+ / +), (+ / -),(- / +) , (- / - )
        //Matris üzerinde köþe noktalar ve diðer kalan noktalara göre hareket yönlendirmeleri yapýlýr.
        // Bu Yönlerin belirlenmesi sonucu; her yön için hareket sayýlarý hesaplanýr ve indexler iþaretlenir.

        if(j==0 && i!=0 && i!=7 ){     // Sadece sola hareket edemeyecek // Dolayýsýyla izin verilen hareket yönleri : sag yukarý - sag asagý

            int tn = (i-j); // sSag yukarý hareketi için hareket sayýsý tn(top number) olarak belirlendi
            int bn = (7-tn); // sag asagý hareket sayýsý bn ( bottom number) olarak belirlendi

            for(int k=1;k<=tn;k++){ // tn kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukarý hareketler iþaretlendi
                    }
            for(int k=1;k<=bn;k++){ // bn kadar tekrar edilir.
                gelendizi[i+k][j+k] = 1; // sag asagý hareketler isaretlendi
                    }
                }


        else if(j==0 && i==0){ // Hem sola Hem yukarý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : sag asagý

            for(int k =1;k<8;k++){
                gelendizi[i+k][j+k] =1; // sag asagý yönde tum tahta boyunca iþaretlenir.
            }

        }
        else if(j==0 && i==7){ // Hem sola Hem asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : sag yukarý

            for(int k =1;k<8;k++){
                gelendizi[i-k][j+k]=1; // sag yukarý yönde tum tahta boyunca iþaretlenir.
            }

        }
        else if(i==0 && j!=0 && j!=7){ // sadece Yukarý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol asagý - sag asagý
            int rb=(7-j); // sag asagý hareketi için hareket sayýsý Rb( right bottom) olarak belirlendi
            int Lb =(j-i); // sol asagý hareketi için hareket sayýsý Lb( left bottom) olarak belirlendi

            for(int k=1;k<=rb;k++){ // rb kadar tekrar edilir.
                gelendizi[i+k][j+k] =1; // sag asagý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lb;k++){ //Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] = 1; // sol asagý hareketler isaretlendi
                    }

        }

        else if(i==0 && j==7){ // Hem Yukarý hem saga haraket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol asagý
             for(int k =1;k<8;k++){
                gelendizi[i+k][j-k]=1; // sol asagý yönde tum tahta boyunca iþaretlenir.
            }
        }
        else if(j==7 && i!= 0 && i!=0){ // Sadece Saga Hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol yukarý - Sol asagý
            int Lb = (j-i); // sol asagý hareketi için hareket sayýsý Lb(left bottom) olarak belirlendi
            int Lt = (7-Lb); // sol yukarý hareket sayýsý bn ( bottom number) olarak belirlendi

            for(int k=1;k<=Lb;k++){ // Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] =1; // sol asagý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukarý hareketler isaretlendi
                    }
        }

        else if(j==7 && i==7){ // Hem saga Hem asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol yukarý
             for(int k =1;k<8;k++){
                gelendizi[i-k][j-k]=1; // sol yukarý yönde tum tahta boyunca iþaretlenir.
            }
        }
        else if ( i==7 && j!=0 && j!=7){ // Sadece Asagý hareket edemicek // Dolayýsýyla izin verilen hareket yönleri : Sol Yukarý - Sag Yukarý

            int rt=(7-j); // sag yukarý hareketi için hareket sayýsý rt( right top) olarak belirlendi
            int Lt =(7-rt); // sol yukarý hareketi için hareket sayýsý Lt( left top) olarak belirlendi

            for(int k=1;k<=rt;k++){ // rt kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukarý hareketler iþaretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukarý hareketler isaretlendi
                    }


            }

        }
    }

    else {
        std::cout <<" ERROR! ";
    }

}

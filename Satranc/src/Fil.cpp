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

        // Fil'in matris d�zlemine g�re 4 �e�it hareketi vardir.
        //X VE Y koordinatlar� i�in   (+ / +), (+ / -),(- / +) , (- / - )
        //Matris �zerinde k��e noktalar ve di�er kalan noktalara g�re hareket y�nlendirmeleri yap�l�r.
        // Bu Y�nlerin belirlenmesi sonucu; her y�n i�in hareket say�lar� hesaplan�r ve indexler i�aretlenir.

        if(j==0 && i!=0 && i!=7 ){     // Sadece sola hareket edemeyecek // Dolay�s�yla izin verilen hareket y�nleri : sag yukar� - sag asag�

            int tn = (i-j); // sSag yukar� hareketi i�in hareket say�s� tn(top number) olarak belirlendi
            int bn = (7-tn); // sag asag� hareket say�s� bn ( bottom number) olarak belirlendi

            for(int k=1;k<=tn;k++){ // tn kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukar� hareketler i�aretlendi
                    }
            for(int k=1;k<=bn;k++){ // bn kadar tekrar edilir.
                gelendizi[i+k][j+k] = 1; // sag asag� hareketler isaretlendi
                    }
                }


        else if(j==0 && i==0){ // Hem sola Hem yukar� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : sag asag�

            for(int k =1;k<8;k++){
                gelendizi[i+k][j+k] =1; // sag asag� y�nde tum tahta boyunca i�aretlenir.
            }

        }
        else if(j==0 && i==7){ // Hem sola Hem asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : sag yukar�

            for(int k =1;k<8;k++){
                gelendizi[i-k][j+k]=1; // sag yukar� y�nde tum tahta boyunca i�aretlenir.
            }

        }
        else if(i==0 && j!=0 && j!=7){ // sadece Yukar� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol asag� - sag asag�
            int rb=(7-j); // sag asag� hareketi i�in hareket say�s� Rb( right bottom) olarak belirlendi
            int Lb =(j-i); // sol asag� hareketi i�in hareket say�s� Lb( left bottom) olarak belirlendi

            for(int k=1;k<=rb;k++){ // rb kadar tekrar edilir.
                gelendizi[i+k][j+k] =1; // sag asag� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lb;k++){ //Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] = 1; // sol asag� hareketler isaretlendi
                    }

        }

        else if(i==0 && j==7){ // Hem Yukar� hem saga haraket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol asag�
             for(int k =1;k<8;k++){
                gelendizi[i+k][j-k]=1; // sol asag� y�nde tum tahta boyunca i�aretlenir.
            }
        }
        else if(j==7 && i!= 0 && i!=0){ // Sadece Saga Hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol yukar� - Sol asag�
            int Lb = (j-i); // sol asag� hareketi i�in hareket say�s� Lb(left bottom) olarak belirlendi
            int Lt = (7-Lb); // sol yukar� hareket say�s� bn ( bottom number) olarak belirlendi

            for(int k=1;k<=Lb;k++){ // Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] =1; // sol asag� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukar� hareketler isaretlendi
                    }
        }

        else if(j==7 && i==7){ // Hem saga Hem asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol yukar�
             for(int k =1;k<8;k++){
                gelendizi[i-k][j-k]=1; // sol yukar� y�nde tum tahta boyunca i�aretlenir.
            }
        }
        else if ( i==7 && j!=0 && j!=7){ // Sadece Asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol Yukar� - Sag Yukar�

            int rt=(7-j); // sag yukar� hareketi i�in hareket say�s� rt( right top) olarak belirlendi
            int Lt =(7-rt); // sol yukar� hareketi i�in hareket say�s� Lt( left top) olarak belirlendi

            for(int k=1;k<=rt;k++){ // rt kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukar� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukar� hareketler isaretlendi
                    }



        }

        }
    }

    else if(tas.ad=="siyah_fil"){

        if(i>=0 && j>=0 && i<=7 && j<=7){

        // Fil'in matris d�zlemine g�re 4 �e�it hareketi vardir.
        //X VE Y koordinatlar� i�in   (+ / +), (+ / -),(- / +) , (- / - )
        //Matris �zerinde k��e noktalar ve di�er kalan noktalara g�re hareket y�nlendirmeleri yap�l�r.
        // Bu Y�nlerin belirlenmesi sonucu; her y�n i�in hareket say�lar� hesaplan�r ve indexler i�aretlenir.

        if(j==0 && i!=0 && i!=7 ){     // Sadece sola hareket edemeyecek // Dolay�s�yla izin verilen hareket y�nleri : sag yukar� - sag asag�

            int tn = (i-j); // sSag yukar� hareketi i�in hareket say�s� tn(top number) olarak belirlendi
            int bn = (7-tn); // sag asag� hareket say�s� bn ( bottom number) olarak belirlendi

            for(int k=1;k<=tn;k++){ // tn kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukar� hareketler i�aretlendi
                    }
            for(int k=1;k<=bn;k++){ // bn kadar tekrar edilir.
                gelendizi[i+k][j+k] = 1; // sag asag� hareketler isaretlendi
                    }
                }


        else if(j==0 && i==0){ // Hem sola Hem yukar� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : sag asag�

            for(int k =1;k<8;k++){
                gelendizi[i+k][j+k] =1; // sag asag� y�nde tum tahta boyunca i�aretlenir.
            }

        }
        else if(j==0 && i==7){ // Hem sola Hem asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : sag yukar�

            for(int k =1;k<8;k++){
                gelendizi[i-k][j+k]=1; // sag yukar� y�nde tum tahta boyunca i�aretlenir.
            }

        }
        else if(i==0 && j!=0 && j!=7){ // sadece Yukar� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol asag� - sag asag�
            int rb=(7-j); // sag asag� hareketi i�in hareket say�s� Rb( right bottom) olarak belirlendi
            int Lb =(j-i); // sol asag� hareketi i�in hareket say�s� Lb( left bottom) olarak belirlendi

            for(int k=1;k<=rb;k++){ // rb kadar tekrar edilir.
                gelendizi[i+k][j+k] =1; // sag asag� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lb;k++){ //Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] = 1; // sol asag� hareketler isaretlendi
                    }

        }

        else if(i==0 && j==7){ // Hem Yukar� hem saga haraket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol asag�
             for(int k =1;k<8;k++){
                gelendizi[i+k][j-k]=1; // sol asag� y�nde tum tahta boyunca i�aretlenir.
            }
        }
        else if(j==7 && i!= 0 && i!=0){ // Sadece Saga Hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol yukar� - Sol asag�
            int Lb = (j-i); // sol asag� hareketi i�in hareket say�s� Lb(left bottom) olarak belirlendi
            int Lt = (7-Lb); // sol yukar� hareket say�s� bn ( bottom number) olarak belirlendi

            for(int k=1;k<=Lb;k++){ // Lb kadar tekrar edilir.
                gelendizi[i+k][j-k] =1; // sol asag� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukar� hareketler isaretlendi
                    }
        }

        else if(j==7 && i==7){ // Hem saga Hem asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol yukar�
             for(int k =1;k<8;k++){
                gelendizi[i-k][j-k]=1; // sol yukar� y�nde tum tahta boyunca i�aretlenir.
            }
        }
        else if ( i==7 && j!=0 && j!=7){ // Sadece Asag� hareket edemicek // Dolay�s�yla izin verilen hareket y�nleri : Sol Yukar� - Sag Yukar�

            int rt=(7-j); // sag yukar� hareketi i�in hareket say�s� rt( right top) olarak belirlendi
            int Lt =(7-rt); // sol yukar� hareketi i�in hareket say�s� Lt( left top) olarak belirlendi

            for(int k=1;k<=rt;k++){ // rt kadar tekrar edilir.
                gelendizi[i-k][j+k] =1; // sag yukar� hareketler i�aretlendi
                    }
            for(int k=1;k<=Lt;k++){ //Lt kadar tekrar edilir.
                gelendizi[i-k][j-k] = 1; // sol yukar� hareketler isaretlendi
                    }


            }

        }
    }

    else {
        std::cout <<" ERROR! ";
    }

}

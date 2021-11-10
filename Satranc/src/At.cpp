#include "At.h"
#include <iostream>
At::At()
{
    //ctor
}

At::~At()
{
    //dtor
}


void At::yetenek(Tas& tas,int i, int j, int** gelendizi ){

    if(tas.ad == "beyaz_at"){             // Beyaz At'ýn bulundugu konumdan hareket edebileceði alanlar isaretleniyor.

        if((i==0 && j==0) || (i==1 && j==0)){
            gelendizi[i][j] = 1;  gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j+2] = 1;

        }

        else if((i==0 && j==1) || (i==1 && j==1)){
            gelendizi[i][j] = 1;  gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j+2] = 1; gelendizi[i+2][j-1] = 1;

        }
        else if((i==0 && j==7) || (i==1 && j==7)){
            gelendizi[i][j] = 1; gelendizi[i+2][j-1] = 1;   gelendizi[i+1][j-2] = 1;

        }
        else if((i==0 && j==6) || (i==1 && j==6)){
            gelendizi[i][j] = 1;   gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j-2] = 1;

        }

        else if((i==6 && j==0) || (i==6 && j==1)){

           gelendizi[i][j] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;

        }
        else if((i==7 && j==0) || (i==7 && j==1)){

            gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i-1][j+2] = 1;

        }

        else if(i==0 && j!=0 && j!=1 && j!=6 && j!=7){
            gelendizi[i][j] = 1;  gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j-2] = 1;
            gelendizi[i+1][j+2] = 1;
        }
        else if(i==1 && j!=0 && j!=1 && j!=6 && j!=7){
            gelendizi[i][j] = 1;  gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1; gelendizi[i-1][j-2] = 1;
            gelendizi[i+1][j-2] = 1; gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;

        }
        else if(j==0 && i!=0 && i!=1 && i!=6 && i!=7){
            gelendizi[i][j] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i+2][j+1] = 1;  gelendizi[i-1][j+2] = 1;
            gelendizi[i+1][j+2] = 1;
        }
        else if(j==1 && i!=0 && i!=1 && i!=6 && i!=7 ){
           gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i+2][j-1] = 1;
           gelendizi[i+2][j+1] = 1;  gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;

        }

        else if(i!=0 && i!=1 && i!=6 && i!=7 && j!=0 && j!=1 && j!=6 && j!=7){
          gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i+2][j-1] = 1;
           gelendizi[i+2][j+1] = 1; gelendizi[i-1][j-2] = 1; gelendizi[i+1][j-2] = 1; gelendizi[i-1][j+2] = 1;
           gelendizi[i+1][j+2] = 1;

        }


    }
    else if(tas.ad == "siyah_at"){   // Siyah At'ýn bulundugu konumdan hareket edebileceði alanlar isaretleniyor.

        if((i==0 && j==0) || (i==1 && j==0)){
            gelendizi[i][j] = 1;  gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j+2] = 1;

        }
        else if((i==0 && j==1) || (i==1 && j==1)){
            gelendizi[i][j] = 1;  gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j+2] = 1; gelendizi[i+2][j-1] = 1;

        }
        else if((i==0 && j==7) || (i==1 && j==7)){
            gelendizi[i][j] = 1; gelendizi[i+2][j-1] = 1;   gelendizi[i+1][j-2] = 1;

        }
        else if((i==0 && j==6) || (i==1 && j==6)){
            gelendizi[i][j] = 1;   gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j-2] = 1;

        }
        else if(i==0 && (j==2 || j==3 || j==4 || j==5)){
            gelendizi[i][j] = 1;  gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j-2] = 1;
            gelendizi[i+1][j+2] = 1;

        }

        else if((i==6 && j==0) || (i==6 && j==1)){
            gelendizi[i][j] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;
        }
        else if((i==7 && j==0) || (i==7 && j==1)){
            gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i-1][j+2] = 1;
            gelendizi[i+1][j+2] = 1;
        }
        else if(i==0 && j!=0 && j!=1 && j!=6 && j!=7){
            gelendizi[i][j] = 1;  gelendizi[i+2][j-1] = 1;gelendizi[i+2][j+1] = 1;  gelendizi[i+1][j-2] = 1;
            gelendizi[i+1][j+2] = 1;
        }
        else if(i==1 && j!=0 && j!=1 && j!=6 && j!=7){
            gelendizi[i][j] = 1; gelendizi[i+2][j-1] = 1; gelendizi[i+2][j+1] = 1; gelendizi[i-1][j-2] = 1;
            gelendizi[i+1][j-2] = 1; gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;

        }
        else if(j==0 && i!=0 && i!=1 && i!=6 && i!=7){
           gelendizi[i][j] = 1; gelendizi[i-2][j+1] = 1;gelendizi[i+2][j+1] = 1;  gelendizi[i-1][j+2] = 1;
            gelendizi[i+1][j+2] = 1;
        }
        else if(j==1 && i!=0 && i!=1 && i!=6 && i!=7 ){
           gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i+2][j-1] = 1;
           gelendizi[i+2][j+1] = 1;  gelendizi[i-1][j+2] = 1; gelendizi[i+1][j+2] = 1;

        }

        if(i!=0 && i!=1 && i!=6 && i!=7 && j!=0 && j!=1 && j!=6 && j!=7){
           gelendizi[i][j] = 1; gelendizi[i-2][j-1] = 1; gelendizi[i-2][j+1] = 1; gelendizi[i+2][j-1] = 1;
           gelendizi[i+2][j+1] = 1; gelendizi[i-1][j-2] = 1;gelendizi[i+1][j-2] = 1; gelendizi[i-1][j+2] = 1;
           gelendizi[i+1][j+2] = 1;

        }

    }

    else {
        std::cout <<" ERROR! ";
    }







}


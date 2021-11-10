#ifndef VEZIR_H
#define VEZIR_H
#include<Tas.h>

class Vezir : public Tas
{
    public:
        Vezir();
        virtual ~Vezir();
        void yetenek(Tas& tas,int i,int j,int** dizi);  // Vezir'e ozel hareket algoritmasini iceren fonksiyon prototipi

    protected:

    private:
};

#endif // VEZIR_H

#ifndef KALE_H
#define KALE_H
#include<Tas.h>


class Kale : public Tas
{
    public:
        Kale();
        virtual ~Kale();
        void yetenek(Tas& tas,int i,int j,int** dizi);    // Kale'ye ozel hareket algoritmasini iceren fonksiyon prototipi

    protected:

    private:
};

#endif // KALE_H

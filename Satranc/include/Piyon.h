#ifndef PIYON_H
#define PIYON_H
#include<Tas.h>

class Piyon : public Tas
{
    public:
        Piyon();
        virtual ~Piyon();
        void yetenek(Tas& tas,int i,int j,int** dizi);  // Piyon'a ozel hareket algoritmasini iceren fonksiyon prototipi
    protected:

    private:
};

#endif // PIYON_H

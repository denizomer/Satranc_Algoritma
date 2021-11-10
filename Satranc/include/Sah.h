#ifndef SAH_H
#define SAH_H
#include<Tas.h>

class Sah : public Tas
{
    public:
        Sah();
        virtual ~Sah();
        void yetenek(Tas& tas,int i,int j,int** dizi); // Sah'a ozel hareket algoritmasini iceren fonksiyon prototipi

    protected:

    private:
};

#endif // SAH_H

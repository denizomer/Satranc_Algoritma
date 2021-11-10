#ifndef FIL_H
#define FIL_H
#include<Tas.h>

class Fil : public Tas
{
    public:
        Fil();
        virtual ~Fil();
        void yetenek(Tas& tas,int i,int j,int** dizi);   // Fil'e ozel hareket algoritmasini iceren fonksiyon prototipi
    protected:

    private:
};

#endif // FIL_H

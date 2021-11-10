#ifndef AT_H
#define AT_H
#include<Tas.h>

class At : public Tas
{
    public:
        At();
        virtual ~At();
        void yetenek(Tas& tas, int i,int j,int** dizi);  // At'a ozel hareket algoritmasini iceren fonksiyon prototipi
    protected:

    private:
};

#endif // AT_H

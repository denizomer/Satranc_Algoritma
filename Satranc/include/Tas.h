#ifndef TAS_H
#define TAS_H
#include <iostream>
#include <string>


class Tas
{
    public:

        Tas();
        virtual ~Tas();                               //** Tum Taslarin Kalitildigi siniftir. ** //

        int tas_puani;
        std::string ad;
        std::string konum[8][8];
        int x,y;
        friend class Tahta;



    protected:

    private:
    enum takim{

    beyaz = 'b',
    siyah = 's'

              };
    takim renk;


};

#endif // TAS_H

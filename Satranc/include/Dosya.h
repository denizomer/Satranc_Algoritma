#ifndef DOSYA_H
#define DOSYA_H
#include <iostream>
#include <string>
#include <fstream>

class Dosya
{
    public:
        Dosya();
        virtual ~Dosya();

        std::string dosyadanOku(std::string dizi[][8]);   // TXT metni okuma fonksiyonu prototipi
    protected:

    private:
};

#endif // DOSYA_H

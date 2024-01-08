#ifndef OPERATIUNI_HPP
#define OPERATIUNI_HPP

#include "ContBancar.hpp"

class Operatiuni {
public:
    virtual float getSumaTotala() = 0;
    virtual float getDobanda() = 0;
    virtual void depunere(float suma) = 0;
    virtual void extragere(float suma) = 0;
    // virtual void transfer(ContBancar& contDest, float suma) = 0;
};

#endif /* OPERATIUNI_HPP */

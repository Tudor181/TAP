#ifndef CONTBANCAR_HPP
#define CONTBANCAR_HPP

#include <string>
#include <iostream>
#include "Operatiuni.hpp"

class ContBancar : public Operatiuni {
private:
    std::string numarCont;
    float suma;
    std::string moneda;

public:
    ContBancar(std::string numar, float suma, std::string moneda);

    ContBancar(const ContBancar& other);

    std::string getNumarCont();
    void setNumarCont(std::string numar);

    float getSuma();
    void setSuma(float suma);

    std::string getMoneda();
    void setMoneda(std::string moneda);

    void depunere(float suma) override;
    void extragere(float suma) override;
    void transfer(ContBancar& contDest, float suma);

    float getSumaTotala() override;
    float getDobanda() override;

    void afisareDateCont();
};

#endif /* CONTBANCAR_HPP */

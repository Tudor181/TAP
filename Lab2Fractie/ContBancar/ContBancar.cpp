#include "ContBancar.hpp"

ContBancar::ContBancar(std::string numar, float suma, std::string moneda)
    : numarCont(numar), suma(suma), moneda(moneda) {}

ContBancar::ContBancar(const ContBancar& other)
    : numarCont(other.numarCont), suma(other.suma), moneda(other.moneda) {}

std::string ContBancar::getNumarCont() {
    return numarCont;
}

void ContBancar::setNumarCont(std::string numar) {
    numarCont = numar;
}

float ContBancar::getSuma() {
    return suma;
}

void ContBancar::setSuma(float suma) {
    this->suma = suma;
}

std::string ContBancar::getMoneda() {
    return moneda;
}

void ContBancar::setMoneda(std::string moneda) {
    this->moneda = moneda;
}

void ContBancar::depunere(float suma) {
    this->suma += suma;
}

void ContBancar::extragere(float suma) {
    if (this->suma >= suma) {
        this->suma -= suma;
    } else {
        std::cout << "Fonduri insuficiente!" << std::endl;
    }
}

void ContBancar::transfer(ContBancar& contDest, float suma) {
    if (this->suma >= suma) {
        this->suma -= suma;
        contDest.depunere(suma);
    } else {
        std::cout << "Fonduri insuficiente pentru transfer!" << std::endl;
    }
}

float ContBancar::getSumaTotala() {
    float dobanda = 0.0f;
    if (moneda == "RON" && suma < 500) {
        dobanda = suma * 0.003f; 
    } else if (moneda == "RON" && suma >= 500) {
        dobanda = suma * 0.008f; 
    } else if (moneda == "Euro") {
        dobanda = suma * 0.001f; 
    }
    return suma + dobanda;
}

float ContBancar::getDobanda() {
    float dobanda = 0.0f;
    if (moneda == "RON" && suma < 500) {
        dobanda = suma * 0.003f; 
    } else if (moneda == "RON" && suma >= 500) {
        dobanda = suma * 0.008f; 
    } else if (moneda == "Euro") {
        dobanda = suma * 0.001f; 
    }
    return dobanda;
}

void ContBancar::afisareDateCont() {
    std::cout << "Numar Cont: " << numarCont << " - Suma: " << suma << " " << moneda << std::endl;
}

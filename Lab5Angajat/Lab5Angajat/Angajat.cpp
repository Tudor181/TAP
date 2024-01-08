//
//  Angajat.cpp
//  Lab5Angajat
//
//  Created by Tudor Alin Cofariu on 11.12.2023.
//

#include "Angajat.hpp"

Angajat::Angajat(int nrOre, double tarifOrar):nrOre(nrOre),tarifOrar(tarifOrar){}

Angajat::Angajat(const Angajat& other):nrOre(other.nrOre), tarifOrar(other.tarifOrar){}

Angajat::~Angajat(){}

double Angajat::getTarifOrar(){
    return this->tarifOrar;
}

double Angajat::getSalar(){
    return this->tarifOrar * this->nrOre;
}

Angajat& Angajat::operator=(const Angajat& other){
//    return * new Angajat(other.nrOre, other.tarifOrar);
    if (this != &other) {
            this->nrOre = other.nrOre;
            this->tarifOrar = other.tarifOrar;
        }
    return *this;
}


std::ostream& operator<<(ostream& os, const Angajat& angajat) {
    os << typeid(angajat).name() << " nrOre: " << angajat.nrOre << ", tarifOrar: " << angajat.tarifOrar;

    return os;
}

std::istream& operator>>(istream& os, Angajat& angajat){
    cout<<"Input nrOre: ";
    os>>angajat.nrOre;
    cout<<"input tarifOrar: ";
    os>>angajat.tarifOrar;
    return os;
}




//
//  Manager.cpp
//  Lab5Angajat
//
//  Created by Tudor Alin Cofariu on 11.12.2023.
//

#include "Manager.hpp"

Manager::Manager(int nrOre, double tarifOrar, int nrSubordonati):Angajat(nrOre, tarifOrar), nrSubordonati(nrSubordonati){}

Manager::Manager(const Manager& other):Angajat(other),nrSubordonati(other.nrSubordonati){}

Manager::~Manager(){}

double Manager::getSalar(){
    double baseSalary = Angajat::getSalar();
    return baseSalary + baseSalary * 0.5;
}

int Manager::getNrSubordonati(){
    return this->nrSubordonati;
}

Manager& Manager::operator=(const Manager& other){
//    return * new Angajat(other.nrOre, other.tarifOrar);
//    if (this != &other) {
//            this->nrOre = other.nrOre;
//            this->tarifOrar = other.tarifOrar;
//        }
//    return *this;
//    Manager rez = static_cast<Manager>(Angajat::operator=(other));
//    rez.base
    
    if (this != &other) {
            Angajat::operator=(other);
        
            this->nrSubordonati = other.nrSubordonati;
        }
    return *this;
    
}

std::ostream& operator<<(ostream& os,  const Manager& manager){
    os << static_cast<const Angajat&>(manager);
    os<<", nr subordonati: "<<manager.nrSubordonati;
    
    return os;
}

std::istream& operator>>(istream& os, Manager& manager){
    os >> static_cast<Angajat&>(manager);

    cout<<"Input nr subordonati: ";
    os >> manager.nrSubordonati;
    
    return os;
}

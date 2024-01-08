//
//  Angajat.hpp
//  Lab5Angajat
//
//  Created by Tudor Alin Cofariu on 11.12.2023.
//

#ifndef Angajat_hpp
#define Angajat_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Angajat {
private:
    double tarifOrar;
    int nrOre;
public:
    Angajat(int, double=5.5);
    ~Angajat();
    Angajat(const Angajat&);
    

    
    virtual double getSalar();
    double getTarifOrar();
    
    Angajat& operator=(const Angajat&);
    friend ostream& operator<<(ostream& os, const Angajat& angajat);
    friend istream& operator>>(istream& os,  Angajat& angajat);
    
};

#endif /* Angajat_hpp */

//
//  Manager.hpp
//  Lab5Angajat
//
//  Created by Tudor Alin Cofariu on 11.12.2023.
//

#ifndef Manager_hpp
#define Manager_hpp

#include "Angajat.hpp"



class Manager:public Angajat{
    
private:
    int nrSubordonati;
public:
    Manager(int nrOre, double tarifOrar=5.5, int=0);
    Manager(const Manager&);
    ~Manager();
    double getSalar() override;
    int getNrSubordonati();
    
    Manager& operator=(const Manager&);
    
    friend ostream& operator<<(ostream& os, const Manager& );
    friend istream& operator>>(istream& os, Manager& );
   
};

#include <stdio.h>

#endif /* Manager_hpp */

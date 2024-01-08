//
//  main.cpp
//  Lab5Angajat
//
//  Created by Tudor Alin Cofariu on 11.12.2023.
//

#include <iostream>
#include "Angajat.hpp"
#include "Manager.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    Angajat m(5, 10);
//    Angajat *p = new Angajat(7, 7.5);
//    cout<<m.getTarifOrar()<<'\n'<<p->getTarifOrar()<<'\n';
//    Angajat c = m;
//    c = *p;
//    cout<<c.getTarifOrar()<<"\n---use of operator<< ----\n";
//    cout<<c<<'\n';
//    Angajat cititCuOperator(1);
//    cout<<"---introduceti datele necesare pt urm angajat---\n";
//    cin>>cititCuOperator;
//    cout<<"acest angajat s-a citit: "<<cititCuOperator;
//    std::cout << "\nHello, World!\n";
    
    
    Angajat *angajat = new Angajat(120, 10);
    cout<<*angajat<<", Salar: "<<angajat->getSalar()<<'\n';
    
    Manager *manager = new Manager(120 , 10);
    cout<<*manager<<", Salar: "<<manager->getSalar()<<'\n';
    
    cout<<"try to >> manager:\n";
    cin>>*manager;
    cout<<"After data read:\n";
    cout<<*manager<<'\n';
    return 0;
}

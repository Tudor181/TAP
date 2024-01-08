//
//  main.cpp
//  Lab2Fractie
//
//  Created by Tudor Alin Cofariu on 27.11.2023.
//

#include <iostream>
#include "Fractie.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    Fractie *f2 = new Fractie(5);
    cout<<f2->getNumarator()<<" a\n";
    
    Fractie *f3 = new Fractie(2,4);
    cout<<f3->getNumarator()<<" a\n";
    
    Fractie f4;
    cout<<f4.getNumarator()<<" a\n";
    
    Fractie fcopy(*f3);
//    Fractie *fadsad = new Fractie(*f3);
    cout<<"Fcopy\n";
    //fcopy.getNumarator()<<'/'<< fcopy.getNumitor()<<" a\n";
    
    fcopy.printFractie();
    Fractie *f_de_adunat = new Fractie(5,5);
    cout<<"+\n";
    f_de_adunat->printFractie();
    cout<<"= ";
    fcopy.adunare(*f_de_adunat);
//    fcopy.adunare(fcopy);
    fcopy.printFractie();
    cout<<"- ";
    f_de_adunat->printFractie();
    cout<<"= ";
    fcopy.scadere(*f_de_adunat);
    fcopy.printFractie();
    
    cout<<"/ ";
    (new Fractie(5,1))->printFractie();
    cout<<"= ";
    fcopy.impartire(*(new Fractie(5,1)));
    fcopy.printFractie();
    
    bool d = fcopy.egal(fcopy);
    cout<<'d'<<d<<'\n';
    
    
    
    return 0;
}

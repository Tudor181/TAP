//
//  Persoana.cpp
//  Lab2Fractie
//
//  Created by Tudor Alin Cofariu on 27.11.2023.
//

#include <iostream>
#include "Fractie.h"
using namespace std;

//Fractie::Fractie(float numarator, float numitor){
//    this->numarator = numarator;
//    this->numitor = numitor;
//}
Fractie::Fractie(float numarator, float numitor):numarator(numarator),numitor(numitor){}

//Fractie::Fractie(const Fractie& other):numarator(other.numarator),numitor(other.numitor){}
Fractie::Fractie(const Fractie& other){
    this->numarator = other.numarator;
    this->numitor = other.numitor;
}

float Fractie:: getNumarator(){
    return this->numarator;
}

float Fractie:: getNumitor(){
    return this->numitor;
}

void Fractie::printFractie(){
    cout<<this->getNumarator()<<'/'<<this->getNumitor()<<'\n';
}

void Fractie::adunare(Fractie& other){
    Fractie copyOther(other);
    if(this->numitor != other.numitor)
    {
        
        copyOther.numarator *= this->numitor;
        copyOther.numitor *= this->numitor;
        this->numarator*=other.numitor;
        this->numitor*=other.numitor;
    }
    this->numarator += copyOther.numarator;
    int b = Fractie::cmmmdc(this->numarator, this->numitor);
    if(b>1){
        this->simplificare(b);
    }
    
}

void Fractie::scadere(Fractie& other){
    Fractie copyOther(other);
    if(this->numitor != other.numitor)
    {
        
        copyOther.numarator *= this->numitor;
        copyOther.numitor *= this->numitor;
//        this->numarator*=other.numitor;
//        this->numitor*=other.numitor;
        this->amplificare(other.numitor);
    }
        this->numarator -= copyOther.numarator;
    int b = Fractie::cmmmdc(this->numarator, this->numitor);
    if(b>1){
        this->simplificare(b);
    }
}

void Fractie::amplificare(float number){
    this->numarator*=number;
    this->numitor*=number;
}

void Fractie::simplificare(float number){
    this->numarator/=number;
    this->numitor/=number;
}

void Fractie::inmultire(Fractie& other){
        this->numarator*=other.numarator;
        this->numitor*=other.numitor;

}

void Fractie::impartire(Fractie& other){
        this->numarator*=other.numitor;
        this->numitor*=other.numarator;

}

int Fractie::cmmmdc(float nr1, float nr2){
    
    while (nr2 != 0) {
            int temp = (int)nr2;
            nr2 = (int)nr1 % (int)nr2;
            nr1 = temp;
        }
    return nr1;
}

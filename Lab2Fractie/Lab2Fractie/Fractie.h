//
//  Fractie.h
//  Lab2Fractie
//
//  Created by Tudor Alin Cofariu on 27.11.2023.
//

#ifndef Fractie_h
#define Fractie_h

class Fractie {
private:
    float numarator, numitor;
    
public:
    Fractie(float=0, float=1);
    
    Fractie(const Fractie&);
    
    float getNumarator();
    
    float getNumitor();
    
    void adunare(Fractie&);
    
    void scadere(Fractie&);
    
    void inmultire(Fractie&);
    
    void impartire(Fractie&);
    
    void amplificare(float);
    
    void simplificare(float);
    
    static int cmmmdc(float, float);
    
    
    void printFractie();
};


#endif /* Fractie_h */

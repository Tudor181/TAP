#include <iostream>
#include "Banca.hpp"
#include "Client.hpp"
#include "ContBancar.hpp"

using namespace std;

int main() {
    Banca banca("COD123", 0);

    Client client1("Capota", "Marcel", "Adresa1", 2);
    ContBancar contEuro("123456", 1000, "Euro");
    ContBancar contRON("789012", 2000, "RON");

    client1.adaugaCont(contEuro);
    client1.adaugaCont(contRON);

    Client client2("Soba", "Daniel", "Adresa2", 2);
    ContBancar contRON2("345678", 1500, "RON");
    ContBancar contRON3("901234", 2500, "RON");

    client2.adaugaCont(contRON2);
    client2.adaugaCont(contRON3);

    banca.adaugaClient(client1);
    banca.adaugaClient(client2);


    contEuro.depunere(500); 
    contRON.extragere(300); 
    contRON2.transfer(contRON3, 100); 


    cout << "Cont Euro: " << contEuro.getNumarCont() << " - Suma: " << contEuro.getSumaTotala() <<' '<<contEuro.getDobanda()<< endl;
    cout << "Cont RON: " << contRON.getNumarCont() << " - Suma: " << contRON.getSumaTotala() << endl;
    cout << "Cont RON2: " << contRON2.getNumarCont() << " - Suma: " << contRON2.getSumaTotala() << endl;
    cout << "Cont RON3: " << contRON3.getNumarCont() << " - Suma: " << contRON3.getSumaTotala() << endl;
    for(ContBancar cont : client1.getConturi()){
    cout<<cont.getDobanda()<<endl;
    }

    cout<<"Toate datele:\n";
    banca.afisareDateBanca();

    return 0;
}

#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <vector>
#include "ContBancar.hpp"
using namespace std;

class Client {
private:
    string nume;
    string prenume;
    string adresa;
    unsigned int nrConturi;
    vector<ContBancar> conturi;

public:
    Client(std::string nume, std::string prenume, std::string adresa, unsigned int nrConturi);
    Client(const Client&);

    vector<ContBancar> getConturi();
    string getNume();
    void setNume(const string& nume);

    string getPrenume();
    void setPrenume(const string& prenume);

    string getAdresa();
    void setAdresa(const string& adresa);

    unsigned int getNrConturi();
    void setNrConturi(unsigned int nrConturi);

    void afisareDateClient();
    void adaugaCont(const ContBancar&);
};

#endif /* CLIENT_HPP */

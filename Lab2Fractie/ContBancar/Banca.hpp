#ifndef BANCA_HPP
#define BANCA_HPP

#include <string>
#include <vector>
#include "Client.hpp"

class Banca {
private:
    std::string codBanca;
    unsigned int nrClienti;
    std::vector<Client> clienti; 

public:
    Banca(std::string cod, unsigned int nr);

    Banca(const Banca& other);

    std::string getCodBanca();
    void setCodBanca(std::string cod);

    unsigned int getNrClienti();
    void setNrClienti(unsigned int nr);

    void adaugaClient(const Client& client); 
    void afisareDateBanca();
};

#endif /* BANCA_HPP */

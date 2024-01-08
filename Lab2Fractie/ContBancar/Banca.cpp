#include "Banca.hpp"
#include "Client.hpp"

Banca::Banca(std::string cod, unsigned int nr) : codBanca(cod), nrClienti(nr) {}

Banca::Banca(const Banca& other) : codBanca(other.codBanca), nrClienti(other.nrClienti), clienti(other.clienti) {}

std::string Banca::getCodBanca() {
    return codBanca;
}

void Banca::setCodBanca(std::string cod) {
    codBanca = cod;
}

unsigned int Banca::getNrClienti() {
    return nrClienti;
}

void Banca::setNrClienti(unsigned int nr) {
    nrClienti = nr;
}

void Banca::adaugaClient(const Client& client) {
    clienti.push_back(client);
}

void Banca::afisareDateBanca() {
    std::cout << "Cod Banca: " << codBanca << std::endl;
    for (int i = 0; i < clienti.size(); ++i) {
        clienti[i].afisareDateClient();
    }
}

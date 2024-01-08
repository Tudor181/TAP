#include "Client.hpp"

Client::Client(std::string nume, std::string prenume, std::string adresa, unsigned int nrConturi)
    : nume(nume), prenume(prenume), adresa(adresa), nrConturi(nrConturi) {}

Client::Client(const Client& other)
    : nume(other.nume), prenume(other.prenume), adresa(other.adresa), nrConturi(other.nrConturi), conturi(other.conturi) {}

std::string Client::getNume() {
    return nume;
}

void Client::setNume(const std::string& nume) {
    this->nume = nume;
}

std::string Client::getPrenume() {
    return prenume;
}

void Client::setPrenume(const std::string& prenume) {
    this->prenume = prenume;
}

std::string Client::getAdresa() {
    return adresa;
}

void Client::setAdresa(const std::string& adresa) {
    this->adresa = adresa;
}

unsigned int Client::getNrConturi() {
    return nrConturi;
}

void Client::setNrConturi(unsigned int nr) {
    nrConturi = nr;
}

void Client::adaugaCont(const ContBancar& cont) {
    conturi.push_back(cont);
}

void Client::afisareDateClient() {
    std::cout << "Nume Client: " << nume << " " << prenume << std::endl;
    std::cout << "Adresa: " << adresa << std::endl;
    for (int i = 0; i < conturi.size(); ++i) {
        conturi[i].afisareDateCont();
    }
}

vector<ContBancar> Client::getConturi(){
    return conturi;
}

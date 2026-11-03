#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>
#include <string>

class Compte {
protected:
    std::string numero;
    double solde;

public:
    Compte(const std::string& numero, double solde = 0.0) : numero(numero), solde(solde) {}
    virtual ~Compte() {}

    void deposer(double montant) {
        if (montant > 0)
            solde += montant;
        else
            std::cout << "Montant invalide." << std::endl;
    }

    void retirer(double montant) {
        if (montant > 0 && montant <= solde)
            solde -= montant;
        else
            std::cout << "Fonds insuffisants ou montant invalide." << std::endl;
    }

    void afficher() const {
        std::cout << "Compte " << numero << " : solde = " << solde << std::endl;
    }
};

#endif

#ifndef PRODUIT_H
#define PRODUIT_H

#include <iostream>
#include <string>

class Produit {
protected:
    std::string nom;
    double prix;

public:
    Produit(const std::string& nom, double prix) : nom(nom), prix(prix) {}
    virtual ~Produit() {}

    // Methode virtuelle : permet la redefinition dans les classes derivees
    virtual void afficherInfos() const {
        std::cout << "Produit : " << nom << ", Prix : " << prix << " EUR" << std::endl;
    }
};

#endif

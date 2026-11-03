#ifndef PRODUITALIMENTAIRE_H
#define PRODUITALIMENTAIRE_H

#include "Produit.h"

class ProduitAlimentaire : public Produit {
private:
    std::string dateExpiration;

public:
    ProduitAlimentaire(const std::string& nom, double prix, const std::string& dateExpiration)
        : Produit(nom, prix), dateExpiration(dateExpiration) {}

    void afficherInfos() const override {
        std::cout << "Produit alimentaire : " << nom << ", Prix : " << prix
                  << " EUR, Expiration : " << dateExpiration << std::endl;
    }
};

#endif

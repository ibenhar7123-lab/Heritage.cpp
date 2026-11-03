#ifndef PRODUITELECTRONIQUE_H
#define PRODUITELECTRONIQUE_H

#include "Produit.h"

class ProduitElectronique : public Produit {
private:
    int garantie; // en mois

public:
    ProduitElectronique(const std::string& nom, double prix, int garantie)
        : Produit(nom, prix), garantie(garantie) {}

    void afficherInfos() const override {
        std::cout << "Produit electronique : " << nom << ", Prix : " << prix
                  << " EUR, Garantie : " << garantie << " mois" << std::endl;
    }
};

#endif

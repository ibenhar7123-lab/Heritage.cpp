#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "Compte.h"

class CompteEpargne : public Compte {
private:
    double tauxInteret; // en pourcentage (ex : 3 pour 3 %)

public:
    CompteEpargne(const std::string& numero, double solde, double tauxInteret)
        : Compte(numero, solde), tauxInteret(tauxInteret) {}

    // Interet annuel simple = solde * taux / 100
    double calculerInteret() const {
        return solde * tauxInteret / 100.0;
    }
};

#endif

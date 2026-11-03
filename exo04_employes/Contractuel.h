#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H

#include "Employe.h"

class Contractuel : public Employe {
private:
    int dureeContrat; // en mois
    float tauxHoraire;

public:
    Contractuel(const std::string& nom, int id, float salaireDeBase,
                int dureeContrat, float tauxHoraire)
        : Employe(nom, id, salaireDeBase), dureeContrat(dureeContrat), tauxHoraire(tauxHoraire) {}

    float calculerSalaireMensuel(int heures) const {
        return heures * tauxHoraire;
    }

    void afficherInfos() const override {
        Employe::afficherInfos();
        std::cout << "    Type : Contractuel, Duree : " << dureeContrat
                  << " mois, Taux horaire : " << tauxHoraire << " EUR/h" << std::endl;
    }
};

#endif

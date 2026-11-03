#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"

class Etudiant : public Personne {
private:
    std::string niveau;

public:
    // Appel du constructeur de la classe de base dans la liste d'initialisation
    Etudiant(const std::string& nom, int age, const std::string& niveau)
        : Personne(nom, age), niveau(niveau) {}

    void afficher() const {
        Personne::afficher();
        std::cout << "Niveau : " << niveau << std::endl;
    }
};

#endif

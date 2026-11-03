#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include <string>

class Employe {
protected:
    std::string nom;
    int id;
    float salaireDeBase;

public:
    Employe(const std::string& nom, int id, float salaireDeBase)
        : nom(nom), id(id), salaireDeBase(salaireDeBase) {}

    // Destructeur virtuel : indispensable pour delete via un pointeur Employe*
    virtual ~Employe() {
        std::cout << "[DEL] Employe " << nom << " detruit" << std::endl;
    }

    virtual void afficherInfos() const {
        std::cout << "[" << id << "] " << nom << " - Salaire de base : "
                  << salaireDeBase << " EUR" << std::endl;
    }
};

#endif

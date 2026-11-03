#ifndef PERMANENT_H
#define PERMANENT_H

#include "Employe.h"

class Permanent : public Employe {
private:
    float primeAnnuelle;

public:
    Permanent(const std::string& nom, int id, float salaireDeBase, float primeAnnuelle)
        : Employe(nom, id, salaireDeBase), primeAnnuelle(primeAnnuelle) {}

    void afficherInfos() const override {
        Employe::afficherInfos();
        std::cout << "    Type : Permanent, Prime annuelle : " << primeAnnuelle << " EUR" << std::endl;
    }
};

#endif

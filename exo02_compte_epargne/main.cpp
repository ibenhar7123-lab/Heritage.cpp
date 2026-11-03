#include "CompteEpargne.h"

int main() {
    CompteEpargne ce("CE-001", 1000, 3);
    ce.afficher();

    ce.deposer(500);
    ce.retirer(200);
    ce.afficher();

    std::cout << "Interet annuel : " << ce.calculerInteret() << std::endl;

    ce.retirer(10000); // fonds insuffisants
    ce.deposer(-5);    // montant invalide
    return 0;
}

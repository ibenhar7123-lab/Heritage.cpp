#include "ProduitAlimentaire.h"
#include "ProduitElectronique.h"

int main() {
    const int N = 3;
    Produit* produits[N];
    produits[0] = new Produit("Article generique", 10);
    produits[1] = new ProduitAlimentaire("Yaourt", 1.5, "30/12/2026");
    produits[2] = new ProduitElectronique("Casque audio", 79.9, 24);

    // Polymorphisme : la bonne version de afficherInfos() est appelee
    for (int i = 0; i < N; i++)
        produits[i]->afficherInfos();

    for (int i = 0; i < N; i++)
        delete produits[i];

    return 0;
}

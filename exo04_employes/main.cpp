#include "Permanent.h"
#include "Contractuel.h"

int main() {
    const int N = 4;

    // Tableau dynamique de pointeurs vers Employe
    Employe** employes = new Employe*[N];
    employes[0] = new Permanent("Alice", 1, 4000, 2000);
    employes[1] = new Contractuel("Bob", 2, 2500, 12, 20);
    employes[2] = new Permanent("Sara", 3, 4500, 2500);
    employes[3] = new Contractuel("Karim", 4, 2000, 6, 18);

    std::cout << "=== Polymorphisme ===" << std::endl;
    for (int i = 0; i < N; i++)
        employes[i]->afficherInfos();

    std::cout << "\n=== Salaire mensuel d'un contractuel (160 h) ===" << std::endl;
    Contractuel* c = dynamic_cast<Contractuel*>(employes[1]);
    if (c != nullptr)
        std::cout << c->calculerSalaireMensuel(160) << " EUR" << std::endl;

    std::cout << "\n=== Liberation de la memoire ===" << std::endl;
    for (int i = 0; i < N; i++)
        delete employes[i];      // destructeur virtuel -> bon destructeur appele
    delete[] employes;

    return 0;
}

#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
#include <string>

class Personne {
protected:
    std::string nom;
    int age;

public:
    Personne(const std::string& nom, int age) : nom(nom), age(age) {}

    void afficher() const {
        std::cout << "Nom : " << nom << ", Age : " << age << " ans" << std::endl;
    }
};

#endif



#ifndef joueur_hpp
#define joueur_hpp
#include "creature.hpp"
#include "arme.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class joueur : public creature {
private:
    string nom;
    vector<arme> inventaire; // Liste des armes possédées par le joueur
    arme* arme_equipee;      // Arme actuellement équipée

public:
    joueur(); // Constructeur par défaut
    void equiperArme(arme* nouvelle_arme); // Méthode pour équiper une arme
    void ajouterArme(const arme& nouvelle_arme); // Méthode pour ajouter une arme à l'inventaire
    void afficherStatistiques() const; // Méthode pour afficher les stats du joueur

    ~joueur();
};

#endif /* joueur_hpp */


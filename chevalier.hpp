
#ifndef chevalier_hpp
#define chevalier_hpp

#include "mage.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "joueur.hpp"
#include "arme.hpp"

using namespace std;

class chevalier : public joueur {
private:
    int armure; // Bonus de défense unique au chevalier
    float bonus_chevalier; // Bonus spécifique au chevalier pour l'attaque ou la défense

public:
    chevalier(); // Constructeur sans paramètres
    void utiliserBouclier(); // Action spéciale de défense
    void attaquer(); // Surcharge de la méthode attaquer
    void afficherStatistiques() const; // Affiche les stats spécifiques au chevalier

    ~chevalier(); // Destructeur
};
#endif /* chevalier_hpp */



#ifndef arme_hpp
#define arme_hpp

#include <iostream>
#include <string>
using namespace std;
class arme {
private:
    string nom;
    int degats;
    int durabilite;
    float chance_critique; // Probabilité de coup critique (0.0 à 1.0)
    int defense;           // Valeur de défense offerte par l'arme
    float chance_defense;  // Probabilité de défense spéciale (0.0 à 1.0)
    float chance_parer;    // Probabilité de parer une attaque (0.0 à 1.0)
    string rarete;         // Rareté de l'arme (ex : "commune", "rare", etc.)

public:
    arme();
    void utiliser(); // Réduit la durabilité de l'arme si applicable
    int getDegats() const; // Retourne les dégâts de l'arme
    float getChanceCritique() const; // Retourne la probabilité de coup critique
    int getDefense() const; // Retourne la valeur de défense
    float getChanceDefense() const; // Retourne la probabilité de défense spéciale
    float getChanceParer() const; // Retourne la probabilité de parer une attaque
    bool estCassee() const;// Vérifie si l'arme est inutilisable
    string getNom() const; // Retourne le nom de l'arme

    void afficher() const;
};


#endif /* arme_hpp */

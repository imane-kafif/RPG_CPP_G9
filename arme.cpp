
#include "arme.hpp"
using namespace std;


arme::arme() {
    nom = "Poing";                 // Valeur par défaut du nom
    degats = 1;                    // Valeur par défaut des dégâts
    durabilite = 1;                // Valeur par défaut de la durabilité
    chance_critique = 0.1f;        // Valeur par défaut de la chance de critique
    defense = 0;                   // Valeur par défaut de la défense
    chance_defense = 0.05f;        // Valeur par défaut de la chance de défense
    chance_parer = 0.1f;           // Valeur par défaut de la chance de parer
    rarete = "commune";            // Valeur par défaut de la rareté
}


void arme::utiliser() {
    if (durabilite > 0) {
        durabilite--;
    }
}

int arme::getDegats() const {
    return degats;
}

float arme::getChanceCritique() const {
    return chance_critique;
}

int arme::getDefense() const {
    return defense;
}

float arme::getChanceParer() const {
    return chance_parer;
}


bool arme::estCassee() const{
if (durabilite <= 0) {
    cout << "Votre arme est cassée." << endl;
    return true;
} else return false;
}

string arme::getNom() const {
    return nom;
}


void arme::afficher() const{
cout << "Nom de l'arme : " << nom << endl;
cout << "Dégâts : " << degats << endl;
cout << "Durabilité : " << durabilite << endl;
cout << "Chance de critique : " << chance_critique * 100 << "%" << endl;
cout << "Défense : " << defense << endl;
cout << "Chance de défense : " << chance_defense * 100 << "%" << endl;
cout << "Chance de parer : " << chance_parer * 100 << "%" << endl;
cout << "Rareté : " << rarete << endl;
} // Affiche les détails de l'arme

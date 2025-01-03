
#include "chevalier.hpp"
#include "joueur.hpp"
#include "arme.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Constructeur sans paramètres
chevalier::chevalier()
    : joueur(),        // Appelle le constructeur par défaut de joueur
      armure(10),      // Valeur par défaut pour l'armure
      bonus_chevalier(0.2) { // Valeur par défaut pour le bonus spécifique
    cout << "Un nouveau chevalier est créé avec des valeurs par défaut !" << endl;
}

// Méthode spécifique : utiliserBouclier
void chevalier::utiliserBouclier() {
    cout << "Le chevalier utilise son bouclier pour se défendre !" << endl;
    int defense_bouclier = armure * 2; // Double l'armure temporairement
    cout << "La défense augmente temporairement de " << defense_bouclier << " points !" << endl;
}

// Surcharge de la méthode attaquer
void chevalier::attaquer() {
    cout << "Le chevalier attaque avec bravoure !" << endl;
    int degats_totaux = arme_equipee ? arme_equipee->getDegats() + (arme_equipee->getDegats() * bonus_chevalier) : 5;
    cout << "Dégâts infligés : " << degats_totaux << endl;
}

// Surcharge de la méthode afficherStatistiques
void chevalier::afficherStatistiques() const {
    joueur::afficherStatistiques(); // Appelle l'affichage de la classe parent
    cout << "Armure : " << armure << endl;
    cout << "Bonus chevalier : " << bonus_chevalier * 100 << "%" << endl;
}

// Destructeur
chevalier::~chevalier() {
    cout << "Le chevalier a quitté le champ de bataille." << endl;
}


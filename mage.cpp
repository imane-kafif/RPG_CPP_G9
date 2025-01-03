

#include "mage.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "joueur.hpp"
#include "arme.hpp"

using namespace std;

// Constructeur sans paramètre avec des valeurs par défaut
mage::mage()
    : joueur(),            // Appelle le constructeur par défaut de joueur
      flux_magique(100),   // Valeur par défaut pour le flux magique
      regen_magique(0.1) { // Taux de régénération de 10%
    cout << "Un nouveau mage est créé avec des valeurs par défaut !" << endl;
}

// Méthode : Lancer un sort
void mage::lancerSort() {
    if (flux_magique >= 20) {
        cout << "Le mage lance un sort puissant !" << endl;
        flux_magique -= 20; // Réduit le flux magique de 20 unités
    } else {
        cout << "Pas assez de flux magique pour lancer un sort !" << endl;
    }
}

// Méthode : Régénérer le flux magique
void mage::regenererMagie() {
    int flux_regenere = static_cast<int>(flux_magique * regen_magique);
    flux_magique += flux_regenere;
    cout << "Le mage régénère " << flux_regenere << " points de flux magique." << endl;
}

// Surcharge : Afficher les statistiques
void mage::afficherStatistiques() const {
    joueur::afficherStatistiques(); // Appelle l'affichage de la classe parent
    cout << "Flux magique : " << flux_magique << endl;
    cout << "Taux de régénération magique : " << regen_magique * 100 << "%" << endl;
}

// Destructeur
mage::~mage() {
    cout << "Le mage a quitté le champ de bataille." << endl;
}




#include <iostream>

#include "joueur.hpp"
#include "creature.hpp"
#include <vector>
#include <string>
#include "arme.hpp"


using namespace std;
// Constructeur par défaut
joueur::joueur() : creature(10, 3, 0.05, 0.05), nom(""), arme_equipee(nullptr) {}
// Méthode pour équiper une arme
void joueur::equiperArme(arme* nouvelle_arme) {
    if (nouvelle_arme && !nouvelle_arme->estCassee()) {
        arme_equipee = nouvelle_arme;
        cout << "Arme équipée : " << nouvelle_arme->getNom() << endl;
    } else {
        cout << "Impossible d'équiper cette arme (cachée ou cassée)." << endl; //cachée car je compte plutard ajouter une arme qui sera dans l'inventaire mais ne pourra pas etre utilisé tant que le joueur n'a pas terminer une certaine quete
    }
}


// Méthode pour ajouter une arme à l'inventaire
void joueur::ajouterArme(const arme& nouvelle_arme) {
    inventaire.push_back(nouvelle_arme);
    cout << "Nouvelle arme ajoutée : " << nouvelle_arme.getNom() << endl;
}

// Méthode pour afficher les statistiques du joueur
void joueur::afficherStatistiques() const {
    cout << "Nom : " << nom << endl;
    cout << "Santé : " << sante << endl;
    cout << "Endurance : " << endurance << endl;
    cout << "Chance d'attaque : " << chance_attaque * 100 << "%" << endl;
    cout << "Chance de défense : " << chance_defense * 100 << "%" << endl;

    if (arme_equipee) {
        cout << "Arme équipée : " << arme_equipee->getNom() << endl;
    } else {
        cout << "Aucune arme équipée." << endl;
    }

    cout << "Inventaire : " << endl;
    for (const auto& arme : inventaire) {
        cout << "- " << arme.getNom() << endl;
    }
}

// Destructeur
joueur::~joueur() {
    cout << "Destruction du joueur : " << nom << endl;
    arme_equipee = nullptr; // Libération explicite
}


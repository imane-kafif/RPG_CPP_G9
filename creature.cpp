
#include <iostream>
#include "creature.hpp"

using namespace std;

creature::creature() : sante(10), endurance(3), chance_attaque(0.05), chance_defense(0.05) {}


// Méthode pour obtenir la chance d'attaque
float creature::getChanceAttaque() const {
    return chance_attaque;
}

// Méthode pour obtenir la chance de défense
float creature::getChanceDefense() const {
    return chance_defense;
}

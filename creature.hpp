

#ifndef creature_hpp
#define creature_hpp

#include <iostream>
using namespace std;

class creature {
protected:
    int sante;
    int endurance;
    float chance_attaque; // Probabilité de chance pour des attaques spéciales (0.0 à 1.0)
    float chance_defense; // Probabilité de chance pour des défenses spéciales (0.0 à 1.0)

public:
    creature(); // constructeur par défaut
    float getChanceAttaque() const; // Retourne la probabilité de chance d'attaque
    float getChanceDefense() const; // Retourne la probabilité de chance de défense
    virtual ~creature() = default;  // destructeur virtuel pour gestion polymorphique
};
#endif /* creature_hpp */

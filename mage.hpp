
#ifndef mage_hpp
#define mage_hpp

#include "joueur.hpp"

using namespace std;

class mage : public joueur {
private:
    int flux_magique;      // Énergie magique disponible
    float regen_magique;   // Taux de régénération de flux magique

public:
    mage(); // Constructeur sans paramètre avec des valeurs par défaut
    void lancerSort(); // Action unique pour lancer un sort
    void regenererMagie(); // Action pour régénérer le flux magique
    void afficherStatistiques() const;

    ~mage(); // Destructeur
};

#endif /* mage_hpp */

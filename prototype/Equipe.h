//
// Created by loant on 01/06/2022.
//

#ifndef MYHANDTEAMCONSOLE_EQUIPE_H
#define MYHANDTEAMCONSOLE_EQUIPE_H

#include <string>
#include <vector>
#include "Joueur.h"

class Equipe {
private:
    std::string m_nom;
    std::vector<Joueur> m_listeJoueur;

public:
    Equipe(std::string nom);
    void ajoutJoueur(Joueur joueur);
    void afficherEquipe() const;
    void initialiserEquipe();
};


#endif //MYHANDTEAMCONSOLE_EQUIPE_H

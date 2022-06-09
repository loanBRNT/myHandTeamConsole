//
// Created by loant on 01/06/2022.
//

#ifndef MYHANDTEAMCONSOLE_JOUEUR_H
#define MYHANDTEAMCONSOLE_JOUEUR_H


#include <string>

class Joueur {
private:

    std::string m_nom;
    std::string m_prenom;
    std::string m_poste;
    int m_num;
    int m_pos;
    int m_tot;
    bool m_capitaine;

public:

    Joueur(std::string nom, std::string prenom, bool capitaine, int num, std::string poste, int butArret, int total);
    std::string getInfos() const;
    bool estCapitaine() const;
};


#endif //MYHANDTEAMCONSOLE_JOUEUR_H

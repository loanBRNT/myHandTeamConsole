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
    int m_num;
    bool m_capitaine;

public:

    Joueur(std::string nom, std::string prenom, bool capitaine, int num);
    std::string getInfos() const;
    bool estCapitaine() const;
};


#endif //MYHANDTEAMCONSOLE_JOUEUR_H

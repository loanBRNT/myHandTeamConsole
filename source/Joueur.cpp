//
// Created by loant on 01/06/2022.
//

#include <iostream>
#include <sstream>
#include "../prototype/Joueur.h"

using namespace std;

string convertIntToString(int x){
    string s;
    stringstream stream;
    stream << x;
    stream >> s;
    return s;
}

Joueur::Joueur(string nom, string prenom, bool capitaine, int num, string poste, int butArret, int total) : m_nom(nom), m_prenom(prenom),
m_capitaine(capitaine), m_num(num), m_poste(poste), m_pos(butArret), m_tot(total){

}

bool Joueur::estCapitaine() const{
    return m_capitaine;
}

string Joueur::getInfos() const {
    string infos = m_poste + " | " + convertIntToString(m_num) + " | " + m_nom + " " + m_prenom +
            " | " + convertIntToString(m_pos) + "/" + convertIntToString(m_tot);
    if (m_capitaine) {
        infos += " [C]";
    }
    return infos;
}

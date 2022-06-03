//
// Created by loant on 01/06/2022.
//

#include <iostream>
#include <sstream>
#include "../prototype/Joueur.h"

using namespace std;

Joueur::Joueur(string nom, string prenom, bool capitaine, int num) : m_nom(nom), m_prenom(prenom),
m_capitaine(capitaine), m_num(num){

}

bool Joueur::estCapitaine() const{
    return m_capitaine;
}

string Joueur::getInfos() const {
    string infos =  "";
    stringstream stream;
    stream << m_num;
    stream >> infos;
    infos += " | " + m_nom + " " + m_prenom;
    if (m_capitaine) {
        infos += " [C]";
    }
    return infos;
}

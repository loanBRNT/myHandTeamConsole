//
// Created by loant on 01/06/2022.
//

#include <iostream>
#include <fstream>
#include <string>
#include "../prototype/Equipe.h"

void Equipe::ajoutJoueur(Joueur joueur) {
    m_listeJoueur.push_back(joueur);
}

Equipe::Equipe(std::string nom) : m_listeJoueur(), m_nom(nom) {
    this->initialiserEquipe();
}

void Equipe::afficherEquipe() const {
    std::cout << "Voici la composition d'equipe du " << m_nom << ":" << std::endl;
    for(const auto & joueur : m_listeJoueur){
        std::cout << "- " << joueur.getInfos() << std::endl;
    }
}

void Equipe::initialiserEquipe() {
    std::ifstream baseJoueur("../save/bdd");
    std::string ligne;
    std::vector<std::string> tableau;
    size_t pos;
    bool cap;
    if (baseJoueur){
        while(std::getline(baseJoueur, ligne)){
            while ((pos = ligne.find(" ")) != std::string::npos) {
                tableau.push_back(ligne.substr(0, pos));
                ligne.erase(0, pos + 1);
            }
            if (std::stoi(tableau[2])== 1){
                cap= true;
            } else {
                cap = false;
            }
            m_listeJoueur.push_back((Joueur(tableau[0],tableau[1],cap, std::stoi(tableau[3]))));
            tableau.clear();
        }
    } else {
        std::cout << "ERREUR : Impossible d'ouvrir la BDD en lecture" << std::endl;
    }
}

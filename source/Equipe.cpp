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
    if (baseJoueur){
        while(std::getline(baseJoueur, ligne)){
            std::cout << ligne << std::endl;
        }
    } else {
        std::cout << "ERREUR : Impossible d'ouvrir la BDD en lecture" << std::endl;
    }
}

//
// Created by TheLaskY on 12/13/2019.
//

#include "Monstre.h"

Monstre::Monstre() {

}

Monstre::Monstre(string nom, int pv, Arme &MonArme, int PositionX, int PositionY): EtreVivant(PositionX, PositionY, nom, pv), _MonArme(&MonArme) {

}

void Monstre::Afficher() {
    EtreVivant::Afficher();
    cout<<"J'ai l'arme suivante: ";
    _MonArme->Afficher();
}

void Monstre::Attaquer(EtreVivant &cible) {
    int degats = _MonArme->get_degats();
    EtreVivant::Attaquer(cible,degats);
}


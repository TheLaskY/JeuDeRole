//
// Created by TheLaskY on 12/13/2019.
//

#include "Monstre.h"

Monstre::Monstre() {

}

Monstre::Monstre(string nom, int pv, Arme MonArme): EtreVivant(_PositionX, _PositionY, nom, pv), _MonArme(MonArme) {

}

void Monstre::Afficher() {
    EtreVivant::Afficher();
    cout<<"J'ai l'arme suivante: ";
    _MonArme.Afficher();
}

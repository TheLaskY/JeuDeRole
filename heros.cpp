//
// Created by TheLaskY on 12/13/2019.
//

#include "heros.h"
#include "EtreVivant.h"
#include "Monstre.h"
#include "arme.h"

heros::heros() {

}

heros::heros(string nom, int pv, Arme &MonArme, int PositionX, int PositionY):EtreVivant(PositionX,PositionY,nom,pv), _MonArme(&MonArme) {

}

void heros::Afficher() {
    EtreVivant::Afficher();
    _MonArme->Afficher();
}

void heros::Attaquer(Monstre &cible) {
    int degats = _MonArme->get_degats();
    EtreVivant::Attaquer(cible,degats);
}

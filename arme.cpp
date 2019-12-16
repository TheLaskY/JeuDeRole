//
// Created by TheLaskY on 12/13/2019.
//

#include "arme.h"
#include "EtreVivant.h"

Arme::Arme() {

}

Arme::Arme(string nom, int degats): _degats(degats),_nom(nom) {

}

void Arme::Afficher() {
    cout<<"Nom de l'arme"<<_nom<<endl;
    cout<<"Degats de  l'arme : "<<_degats<<endl;

}

void Arme::Attaquer() {
    cout<<"Nom de l'arme : "<<_nom<<endl;
    cout<<"Degats de l'arme : "<<_degats<<endl;
}

int Arme::get_degats()
{
    return _degats;
}
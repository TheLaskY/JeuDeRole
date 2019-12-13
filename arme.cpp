//
// Created by TheLaskY on 12/13/2019.
//

#include "arme.h"

Arme::Arme() {

}

Arme::Arme(string nom, int degats): _degats(degats),_nom(nom) {

}

void Arme::Afficher() {
    cout<<""<<_nom<<endl;
    cout<<"Degats de  l'arme : "<<_degats<<endl;

}

void Arme::Attaquer() {

}

int Arme::getDegats()
{
    return _degats;
}

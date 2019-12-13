//
// Created by TheLaskY on 12/13/2019.
//

#include "gourdin.h"

void gourdin::Attaque(string nom) {

}

gourdin::gourdin() {

}

gourdin::gourdin(string nom, int degats, double poids): Arme(nom,degats), _poids(poids) {

}

void gourdin::Afficher() {
    Arme::Afficher();
    cout<<"Poids de l'arme : "<<_poids<<endl;
}


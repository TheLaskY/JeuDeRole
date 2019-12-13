//
// Created by TheLaskY on 12/13/2019.
//

#include "epee.h"

epee::epee() {

}

epee::epee(string nom, int degats, double longeur): Arme(nom,degats), _longueur(longeur) {

}

void epee::Afficher() {
    Arme::Afficher();
    cout<<"Longueur de lepee : "<<_longueur<<endl;
}


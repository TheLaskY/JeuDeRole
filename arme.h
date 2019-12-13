//
// Created by TheLaskY on 12/13/2019.
//

#ifndef JEUDEROLE_ARME_H
#define JEUDEROLE_ARME_H
#pragma once
#include <iostream>
using namespace std;
class Arme{
protected:
    string _nom;
    int _degats;

public:
    Arme();
    Arme(string nom, int degats);
    void Afficher();
    virtual void Attaquer();
    int getDegats();

};
#endif //JEUDEROLE_ARME_H

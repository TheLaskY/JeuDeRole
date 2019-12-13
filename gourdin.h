//
// Created by TheLaskY on 12/13/2019.
//
#include "arme.h"
#ifndef JEUDEROLE_GOURDIN_H
#define JEUDEROLE_GOURDIN_H
class gourdin : public Arme{
protected:
    double _poids;

public:
    gourdin();
    gourdin(string nom,int degats,double poids);
    void Attaque(string nom);
    void Afficher();
};
#endif //JEUDEROLE_GOURDIN_H

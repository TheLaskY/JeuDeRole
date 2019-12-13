//
// Created by TheLaskY on 12/13/2019.
//
#ifndef JEUDEROLE_MONSTRE_H
#define JEUDEROLE_MONSTRE_H

#include "EtreVivant.h"
#include "arme.h"
#include "gourdin.h"

class Monstre: public EtreVivant{
protected:
    Arme _MonArme;

public:
    Monstre();
    Monstre(string nom, int pv, Arme MonArme,int PositionX, int PositionY);
    void Afficher();
};

#endif //JEUDEROLE_MONSTRE_H

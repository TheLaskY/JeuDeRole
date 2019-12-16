//
// Created by TheLaskY on 12/13/2019.
//

#ifndef JEUDEROLE_HEROS_H
#define JEUDEROLE_HEROS_H

#include "EtreVivant.h"
#include "arme.h"
#include "Monstre.h"

class heros : public EtreVivant{
protected:
    Arme* _MonArme;
public:
    heros();
    heros(string nom, int pv, Arme &MonArme,int PositionX,int PositionY);
    void Afficher();

    void Attaquer(Monstre &cible);
};
#endif //JEUDEROLE_HEROS_H

//
// Created by TheLaskY on 12/13/2019.
//

#ifndef JEUDEROLE_HEROS_H
#define JEUDEROLE_HEROS_H

#include "EtreVivant.h"
#include "arme.h"

class heros : public EtreVivant{
protected:
    Arme _MonArme;
public:
    heros();
    heros(string nom, int pv, Arme MonArme,int PositionX,int PositionY);
    void Afficher();
};
#endif //JEUDEROLE_HEROS_H

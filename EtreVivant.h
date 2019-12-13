//
// Created by TheLaskY on 12/13/2019.
//

#ifndef JEUDEROLE_ETREVIVANT_H
#define JEUDEROLE_ETREVIVANT_H
#pragma once
#include <xstring>

using namespace std;
class EtreVivant{
protected:


    int _PositionX;
    int _PositionY;
    string _nom;
    int _pv;

public:
    EtreVivant();
    EtreVivant(int PositionX,int PositionY,string nom,int pv);

    virtual void Afficher();
    void SePositioner(int PositionX, int PositionY);
    void Attaquer(EtreVivant &cible);
    void RecevoirDegats(int nbdegats);
};
#endif //JEUDEROLE_ETREVIVANT_H

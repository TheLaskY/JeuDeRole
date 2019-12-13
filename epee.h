//
// Created by TheLaskY on 12/13/2019.
//
#pragma once
#ifndef JEUDEROLE_EPEE_H
#define JEUDEROLE_EPEE_H

#include "arme.h"

class epee : public Arme{
protected:
    double _longueur;

public:
    epee();
    epee(string nom,int degats,double longeur);
    void Afficher();
};
#endif //JEUDEROLE_EPEE_H

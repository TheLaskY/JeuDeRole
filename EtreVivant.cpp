//
// Created by TheLaskY on 12/13/2019.
//

#include "EtreVivant.h"
#include "arme.h"
#include "epee.h"
#include <iostream>

using namespace std;


EtreVivant::EtreVivant() {

}
void EtreVivant::Afficher() {
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<" Nom : "<<_nom<<std::endl;
    std::cout<<" Vie : "<<_pv<<std::endl;
    std::cout<<" Position X : "<<_PositionX<<std::endl;
    std::cout<<" Position Y : "<<_PositionY<<std::endl;

}
EtreVivant::EtreVivant(int PositionX, int PositionY, string nom, int pv): _PositionX(PositionX),_PositionY(PositionY), _nom(nom),_pv(pv) {

}

void EtreVivant::SePositioner(int PositionX,int PositionY) {
    _PositionX = PositionX;
    _PositionY = PositionY;
}

void EtreVivant::Attaquer(EtreVivant &cible, int nbDegats) {
    cout<<"--------------------------------------"<<endl;
    cout<<"La cible attaquee est: "<<cible._nom<<endl;
    RecevoirDegats(cible._nom,cible._pv,nbDegats);

}
void EtreVivant::RecevoirDegats(string nom,int pv,int nbdegats) {
    pv-= nbdegats;
    if (pv<0){
        pv=0;
    }
    cout<<nom<<" recoi "<<nbdegats<<" degats! "<<endl;
    cout<<"Il reste "<<pv<<" a "<<nom<<"!"<<endl;
}

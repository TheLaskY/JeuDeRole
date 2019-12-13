//
// Created by TheLaskY on 12/13/2019.
//

#include "EtreVivant.h"
#include "arme.h"
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
    cout<<"Position X avant: "<<PositionX<<endl;
    cout<<"Entrer une nouvelle position"<<endl;
    cin>>PositionX;
    cout<<"Position Y avant: "<<PositionY<<endl;
    cout<<"Entrer une nouvelle position"<<endl;
    cin>>PositionY;

    cout<<"Position X apres: "<<PositionX<<endl;
    cout<<"Position Y apres: "<<PositionY<<endl;

}

void EtreVivant::Attaquer(EtreVivant &cible) {
    cout<<"--------------------------------------"<<endl;
    cout<<"La cible attaquee est: "<<_nom<<endl;

}
void EtreVivant::RecevoirDegats(int nbDegats) {
    _pv-= nbDegats;
    if (_pv<0){
        _pv=0;
    }
}

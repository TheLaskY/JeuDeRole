#include <iostream>
#include "EtreVivant.h"
#include "arme.h"
#include "gourdin.h"
#include "epee.h"
#include "Monstre.h"

int main() {
    EtreVivant Paul(0,0,"Paul",100);
    Paul.Afficher();

    EtreVivant Monstre2(4,4,"Corobizar",50);
    Monstre2.Afficher();
    gourdin Gourdin1("MonGrosGourdin",50,120);
    Gourdin1.Afficher();
    EtreVivant Etre1 (0,0,"Goldorak",500);
    Monstre Monstre1("Goldoraaak",500,Gourdin1);
    Monstre1.SePositioner(0,0);
    Monstre1.Afficher();


    /*Paul.Attaquer(Monstre2);
    Monstre2.Attaquer(Monstre);



    epee Epee1("Excaliburne",20,200);
    Epee1.Afficher();*/
}
#include <iostream>
#include "EtreVivant.h"
#include "arme.h"
#include "gourdin.h"
#include "epee.h"
#include "Monstre.h"
#include "heros.h"

int main() {
    EtreVivant Paul(0,0,"Paul",100);
    Paul.Afficher();

    EtreVivant Monstre2(4,4,"Corobizar",50);
    Monstre2.Afficher();
    gourdin Gourdin1("MonGrosGourdin",50,120);
    Gourdin1.Afficher();
    EtreVivant Etre1 (0,0,"Goldorak",500);
    Monstre Monstre1("Goldoraaak",500,Gourdin1,0,0);
    //Monstre1.SePositioner(0,0);
    Monstre1.Afficher();
    epee Epee1("MaGroseEpee",150,1000);
    heros Paul1("Paul",100,Epee1,0,0);
    Paul1.Afficher();
    Paul1.Attaquer(Etre1);


    /*Paul.Attaquer(Monstre2);
    Monstre2.Attaquer(Monstre);



    epee Epee1("Excaliburne",20,200);
    Epee1.Afficher();*/
}
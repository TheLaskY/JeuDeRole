#include <iostream>
#include "EtreVivant.h"
#include "arme.h"
#include "gourdin.h"
#include "epee.h"
#include "Monstre.h"
#include "heros.h"

int main() {

    //Creation 1ier EtreVivant
    EtreVivant Paul(0,0,"Paul",100);

    //Creation 2ieme Etrevivant
    EtreVivant Monstre2(4,4,"Corobizar",50);

    //Creation 3ieme EtreVivant
    EtreVivant Etre1 (0,0,"Goldorak",500);

    //Creation d'un heros et de son epee
    epee Epee1("MaGroseEpee",150,1000);
    heros PaulHeros("Paul",100,Epee1,0,0);




    //Creation d'un gourdin et de son monstre
    gourdin Gourdin1("MonGrosGourdin",50,120);
    Monstre Monstre1("Goldoraaak",500,Gourdin1,0,0);

    //Le héros utilise son épée contre un monstre!
    PaulHeros.Afficher();
    PaulHeros.Attaquer(Monstre1,Epee1._degats);


    /*Paul.Attaquer(Monstre2);
    Monstre2.Attaquer(Monstre);



    epee Epee1("Excaliburne",20,200);
    Epee1.Afficher();*/
}
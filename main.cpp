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
    epee Epee1("MaGroseEpee",170,1000);
    heros PaulHeros("Paul",150,Epee1,0,0);




    //Creation d'un gourdin et de son monstre
    gourdin Gourdin1("MonGrosGourdin",50,120);
    Monstre Monstre1("Goldoraaak",500,Gourdin1,0,0);

    //Le héros utilise son épée contre un monstre!
    PaulHeros.Afficher();
    PaulHeros.Attaquer(Monstre1);

    //Le monstre utilise son gourdin!
    Monstre1.Attaquer(PaulHeros);
    PaulHeros.Afficher();

    //Le héros se positionne en x = 10 et y = 20
    PaulHeros.SePositioner(10,20);
    PaulHeros.Afficher();

    //Le monstre se positionne en x = 12 et y = 22
    Monstre1.SePositioner(12,22);
    Monstre1.Afficher();

    //Le heros attaque en 1ier puis le monstre replique
    PaulHeros.Attaquer(Monstre1);
    Monstre1.Attaquer(PaulHeros);
}
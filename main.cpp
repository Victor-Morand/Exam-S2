#include <stdio.h>
#include <iostream>
#include "Plante.h"

int main()
{
    Plante * Fougere = new Plante("Fougère");
    
    Fougere->choix();
    
    Player * Botaniste = new Player();
    
    Botaniste->choix2();

    return 0;
}

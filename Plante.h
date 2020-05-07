#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {
    
    protected :
    
        std::string _nom;
        int _sante;
        int _hydratation;
        int _taille;
        int _maturite;
        int _choix;
    
    public :
    
        void arroser();
        void tailler();
        void engrais();
        void inspecter();
        void choix();
    
        Plante(std::string nomPlante);
};

#endif
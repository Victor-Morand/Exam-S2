#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <stdio.h>
#include <iostream>
#include "Plante.h"

using namespace std;

    void Plante:: arroser(){
        _hydratation=_hydratation+3;
        cout<<"L'hydratation de la plante est de "<< _hydratation<< endl;
    }
    
    void Plante:: tailler(){
        _taille=_taille-3;
        cout<<"La plante a été taillée, taille = "<< _taille<< endl;
    }
    
    void Plante:: engrais(){
        _maturite=_maturite+1;
        cout<<"La plante a une maturité de"<< _maturite<< endl;
    }
    
    void Plante:: inspecter(){
        cout<<"La plante est une "<< _nom << endl;
        cout<<"La plante a "<< _sante<< endl;
        cout<<"L'hydratation de la plante est de "<< _hydratation<< endl;
        cout<<"taille ="<< _taille<< endl;
    }
    
    void Plante:: choix(){
        cout<<"Saisissez 1 pour arroser, 2 pour tailler, 3 pour mettre de l'engrais, 4 pour inspecter"<< endl;
        cin>> _choix;
        
        if (_choix==1){
            arroser();
        }
        
        else if (_choix==2){
            tailler();
        }
        
        else if (_choix==3){
            engrais();
        }
        
        else if (_choix==4){
            inspecter();
        }
        
        else {
            cout<<"Saisissez un chiffre entre 1 et 4"<< endl;
        }
        
    }
    
    Plante::Plante(std::string name) : _nom(name), _sante(10), _hydratation(5),
            _taille(5), _maturite(0)  {}
    
#endif
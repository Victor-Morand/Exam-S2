#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <stdio.h>
#include <iostream>
#include "Player.h"

using namespace std;

    /**void Player:: dormir(){
        for Plante{
            _maturite=_maturite+1;
        }
    }**/
    
    void Player:: vendre(){
        if (_nbPlantesMatures>0){
            cout<<"Vous avez vendu une plante pour 50 euros"<< endl;
            _nbPlantes=_nbPlantes-1;
            _argent=_argent+50;
        }
        
        else {
            cout<<"Vous n'avez pas de plantes à vendre"<< endl;
        }
    }
    
    void Player:: acheterPlantes(){
        if (_argent>=25){
            cout<<"Vous avez acheté une plante pour 25 euros"<< endl;
            _nbPlantes=_nbPlantes+1;
            _argent=_argent-25;
        }
        
        else {
            cout<<"Vous n'avez pas assez d'argent"<< endl;
        }
    }
    
    void Player:: acheterEngrais(){
        if (_argent>=10){
            cout<<"Vous avez acheté de l'engrais pour 10 euros"<< endl;
            _nbEngrais=_nbEngrais+1;
            _argent=_argent-10;
        }
        
        else {
            cout<<"Vous n'avez pas assez d'argent"<< endl;
        }
    }
    
    void Player:: choix2(){
        cout<<"Saisissez 1 pour dormir, 2 pour vendre des plantes, 3 acheter des plantes, 4 pour acheter de l'engrais"<< endl;
        cin>> _choix;
        
        if (_choix2==1){
            dormir();
        }
        
        else if (_choix2==2){
            vendre();
        }
        
        else if (_choix2==3){
            acheterPlantes();
        }
        
        else if (_choix2==4){
            acheterEngrais();
        }
        
        else {
            cout<<"Saisissez un chiffre entre 1 et 4"<< endl;
        }
        
    }
    
    Player::Player: _nbPlantesMatures(0), _nbPlantes(0), nbEngrais(0), _argent(100)  {}
    
#endif
    
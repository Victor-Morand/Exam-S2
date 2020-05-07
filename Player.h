#ifndef PLAYER_H
#define PLAYER_H

#include <string>

Class Player {
    
    protected :
    
    int _argent;
    int _nbPlantesMatures;
    int _nbEngrais;
    int _choix2;
    int _choix3;
    
    public :
    
    void dormir();
    void vendre();
    void acheterPlantes();
    void acheterEngrais();
    void choix2();
    void choix3();
    
};

#endif
#ifndef PLUSPROCHEVOISIN_H_INCLUDED
#define PLUSPROCHEVOISIN_H_INCLUDED

#include<vector>

#include "string"
#include "algorithme.h"
#include "graphe.h"


class plusprochevoisin:public algorithme
{
public :

    void resoudre(vector<ville*> villesduparcours,graphe * gm)override;
    plusprochevoisin(){};
    ~plusprochevoisin(){};
};

#endif // PLUSPROCHEVOISIN_H_INCLUDED

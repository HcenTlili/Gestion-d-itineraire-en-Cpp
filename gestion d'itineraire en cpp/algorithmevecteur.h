#ifndef ALGORITHMEVECTEUR_H_INCLUDED
#define ALGORITHMEVECTEUR_H_INCLUDED
#include<vector>

#include "string"
#include "algorithme.h"
#include "graphe.h"


class algorithmevecteur:public algorithme
{
public :

    virtual void resoudre(graphemat & g,graphemat & gm);
    algorithmevecteur(){};
    ~algorithmevecteur(){};
};



#endif // ALGORITHMEVECTEUR_H_INCLUDED

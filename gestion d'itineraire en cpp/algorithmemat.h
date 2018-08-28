#ifndef ALGORITHMEMAT_H_INCLUDED
#define ALGORITHMEMAT_H_INCLUDED
#include<vector>

#include "string"
#include "algorithme.h"
#include "graphe.h"


class algorithmemat:public algorithme
{
public :

    virtual void resoudre(graphemat & g,graphemat & gm);
    algorithmemat(){};
    ~algorithmemat(){};
};


#endif // ALGORITHMEMAT_H_INCLUDED

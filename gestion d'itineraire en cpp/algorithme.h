#ifndef ALGORITHME_H_INCLUDED
#define ALGORITHME_H_INCLUDED
#include "graphemat.h"
#include "graphe.h"
class algorithme
{  public :
    virtual void resoudre(vector<ville*> villesduparcours,graphe * gm)=0;


};

#endif // ALGORITHME_H_INCLUDED

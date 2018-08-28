#ifndef ALGORITHMEHAZARD_H_INCLUDED
#define ALGORITHMEHAZARD_H_INCLUDED
class algorithmehazard:public algorithme
{
public:
algorithmehazard(){}
~algorithmehazard(){}
 int rechercherpremierevaleur(int * tabdistance,int taille);
    void resoudre(vector<ville*> villesduparcours,graphe * gm)override;

};


#endif // ALGORITHMEHAZARD_H_INCLUDED

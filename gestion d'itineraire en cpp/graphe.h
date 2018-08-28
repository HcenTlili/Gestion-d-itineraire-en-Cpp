#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED
#include <vector>
#include "ville.h"
#include "noeud.h"
#include "route.h"
#include "arete.h"
#include "string"

using namespace std;
class graphe
{
private :

public :

graphe(){};
virtual ~graphe (){};

virtual void ajouter_noeud(ville * n)=0;
virtual void ajouter_arete(route * a)=0;
virtual bool sontConnectes (noeud * n1,noeud * n2)=0;
virtual int getdistance(int id1,int id2)=0;
virtual void afficher_graphe()=0;
virtual void modifier_noeud(int a,ville * n2)=0;
virtual ville * rechercherNoeud(int id)=0;
virtual void setdistance(int a ,int b , int c)=0;
virtual int getsizevecteurnoeuds()=0;
virtual void afficherroutes()=0;
virtual void modifier_arete (int a,int b, int c)=0;
virtual vector<ville*> villesproches(vector<ville*> a,vector<ville*> b,ville * v)=0;
virtual ville * villeplusproche(ville * v,vector<ville*> a)=0;
virtual int calculerdistance(vector<ville*> a)=0;
};
//virtual void saisir_noeud(ville * n)=0;
//virtual void modifier_arete (int id,arete* a)=0;


//virtual void supprimer_noeud(int id )=0;


//virtual void supprimer_arete (int id)=0;
//virtual vector<noeud*> getvoisins(int n)=0;



#endif // GRAPHE_H_INCLUDED

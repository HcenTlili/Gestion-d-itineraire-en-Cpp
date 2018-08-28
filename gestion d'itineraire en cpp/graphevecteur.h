#ifndef GRAPHEVECTEUR_H_INCLUDED
#define GRAPHEVECTEUR_H_INCLUDED

#include<vector>
#include "ville.h"
#include "route.h"
#include "graphe.h"
#include "noeud.h"
#include "arete.h"
#include "string"
using namespace std;

class graphevecteur : public graphe
{
private :


public :


 vector<ville*> vecteurnoeuds;
 vector<route*> vecteuraretes;


graphevecteur(){};

~graphevecteur(){};
 void ajouter_noeud(ville * n)override;
 void ajouter_arete(route * a)override;
 int getdistance(int id1,int id2)override;
 void afficher_graphe()override;
 void modifier_noeud(int id,ville * n2)override;
 ville * rechercherNoeud(int id)override;
 void setdistance(int a ,int b , int c)override;
 int getsizevecteurnoeuds()override;
  void afficherroutes()override;
  int rechercherroute(int id1, int id2);
 void modifier_arete (int a,int b, int c)override;
vector<ville*> villesaproximite(ville * v);
vector<ville*> touteslesvillesatteintes(ville * v);
int existanceville(vector<ville*> a,ville * k);
bool sontConnectes (noeud * n1,noeud * n2)override;
vector<ville*> villesproches(vector<ville*> a,vector<ville*> b,ville * v)override;
ville * villeplusproche(ville * v,vector<ville*> a)override;
int calculerdistance(vector<ville*> a)override;

//
/*virtual void ajouter_noeud(ville * n)=0;
virtual void ajouter_arete(route * a)=0;
virtual bool sontConnectes (noeud * n1,noeud * n2)=0;
virtual int getdistance(int id1,int id2)=0;
virtual void afficher_graphe()=0;
virtual void modifier_noeud(int id,ville * n2)=0;

virtual noeud * rechercherNoeud(int id)=0;
virtual void setdistance(int a ,int b , int c)=0;*/
//virtual void afficher_graphe();

//virtual void modifier_arete (int id,arete* a);

};

#endif // GRAPHEVECTEUR_H_INCLUDED

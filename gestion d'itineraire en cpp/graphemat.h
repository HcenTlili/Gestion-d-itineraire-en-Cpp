#ifndef graphemat_H_INCLUDED
#define graphemat_H_INCLUDED
#include<vector>
#include "ville.h"
#include "route.h"
#include "graphe.h"
#include "noeud.h"
#include "arete.h"
#include "string"
using namespace std;

class graphemat : public graphe
{
private :


public :

  int** mat;
 vector<ville*> vecteurnoeuds;


graphemat(){
  mat= new int*[256];
    for(int i=0;i<256;++i)
        mat[i]=new int[256];


    for(int i=0;i<256;++i)
        for(int j=0;j<256;++j)
        mat[i][j]=0;
};

~graphemat(){};
 //void saisir_noeud(ville * n)override;
 void ajouter_noeud(ville * n)override;
 void modifier_noeud(int id,ville * n2)override;

 void ajouter_arete(route * a)override;


 //int trouver_arete(noeud * n1,noeud * n2)override;
 bool sontConnectes (noeud * n1,noeud * n2)override;
 void afficher_graphe()override;
 int getdistance(int id1,int id2)override;

 ville * rechercherNoeud(int id)override;
 void setdistance(int a ,int b , int c)override;
 int getsizevecteurnoeuds()override;
 void afficherroutes()override;
 void modifier_arete (int a,int b, int c)override;
 int existance(vector<ville*> a,ville * b);
vector<ville*> villesproches(vector<ville*> a,vector<ville*> b,ville * v)override;
ville * villeplusproche(ville * v,vector<ville*> a)override;
int calculerdistance(vector<ville*> a)override;
//virtual void modifier_arete (int id,arete* a);
};




#endif // graphemat_H_INCLUDED


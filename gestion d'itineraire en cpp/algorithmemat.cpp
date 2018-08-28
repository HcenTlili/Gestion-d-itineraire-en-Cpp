#include <iostream>
#include <stdio.h>
#include<vector>
#include "ville.h"
#include "noeud.h"

#include "route.h"
#include "arete.h"
#include "graphemat.h"
#include "algorithmemat.h"
using namespace std;
int minimum(int tab[100], int a)
{int m;
int i ;
int k;

for(i=0;i<a;i++){if((tab[i]!=0)&&(tab[i]!=-1)){m=tab[i];}}
for(k=0;k<a;k++){if((tab[k]!=0)&&(tab[k]!=-1)&&(tab[k]<m)){m=tab[k];}}
return m ;
}
void algorithmemat::resoudre(graphemat & g,graphemat & gm)
{
    int i, j , k=1 , h,p,u;int tab[256];int tab1[256];

cout<<"le parcours est : "<<g.vecteurnoeuds[0]->id<<"\t"<<endl;
for(j=0;j<g.vecteurnoeuds.size();j++){tab[j]=g.mat[0][j];}
for(j=0;j<g.vecteurnoeuds.size();j++){if(tab[j]==minimum(tab,g.vecteurnoeuds.size())){i=j;}}
for(u=0;u<g.vecteurnoeuds.size();u++){g.mat[u][0]=0;}
i=0;
p=0;
   while(k<g.vecteurnoeuds.size())
   {
   for(j=0;j<g.vecteurnoeuds.size();j++)
   { if(j==i){tab[j]=0;}
       tab[j]=g.mat[i][j];
   }
   tab1[k-1]=minimum(tab,k);
   for(j=0;j<g.vecteurnoeuds.size();j++)
   {
       if((tab[j]==minimum(tab,g.vecteurnoeuds.size()))){

       p=p+gm.mat[g.vecteurnoeuds[i]->id][g.vecteurnoeuds[j]->id];
       {for(u=0;u<g.vecteurnoeuds.size();u++){g.mat[u][j]=0;};
       cout<<g.vecteurnoeuds[j]->id<<"\t"<<endl;
       g.mat[j][i]=-1;i=j; h++;
       }}
   }
  k++;
   }
   cout<<"et on reprend le meme chemin en sens inverse pour completer le parcours\n"<<endl;
   cout<<"la distance parcourue est :"<<p<<"\t\n"<<endl;
   for(i=0;i<g.vecteurnoeuds.size();i++)
    {
        for(j=0;j<g.vecteurnoeuds.size();j++)
            {
             cout<<g.mat[i][j]<<"\t";
             if(j==g.vecteurnoeuds.size()-1){cout<<"\n";}
            }
    }

}

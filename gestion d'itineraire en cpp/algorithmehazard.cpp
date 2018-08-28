#include <iostream>
#include <stdio.h>
#include<vector>
#include "ville.h"
#include "noeud.h"

#include "route.h"
#include "arete.h"
#include "graphemat.h"
#include "algorithmemat.h"
#include "algorithmehazard.h"
 int algorithmehazard::rechercherpremierevaleur(int * tabdistance,int taille)
 {
     int i, j ,k;
     for(i=0;i<taille;i++)
     {
         if(tabdistance[i]>0){return i;}
     }
     return -1;




 }
 void algorithmehazard::resoudre(vector<ville*> villesduparcours,graphe * gm)
 {
       vector<ville**> vectcomb;
       for(int i=0;i<villesduparcours.size();i++)
       {
                vectcomb.push_back(new ville*[villesduparcours.size()-1] );
            //   vectcomb[i]=new ville*[villesduparcours.size()-1];
cout<<"aaaa"<<endl;
       }
ville * h;
int i =0,j=0;
while(i<villesduparcours.size())
    {
    for(int k=0;k<villesduparcours.size();k++)
    {
     cout<<"cons "<<endl;
        vectcomb[i][k]=villesduparcours[k];

    }
cout<<vectcomb[0][0]->nomville;
    h=villesduparcours[i];
    villesduparcours[i]=villesduparcours[i+1];
    villesduparcours[i+1]=h;
    i++;
    }

int a;
int* tabdistance;
tabdistance = new int (villesduparcours.size()-1);
for(int i=0;i<villesduparcours.size()-1;i++)
{a=0;
    for(int j =0;j<villesduparcours.size()-1;j++)
    {

        if((gm->getdistance(vectcomb[i][j]->id,vectcomb[i][j+1]->id)==0)||(gm->getdistance(vectcomb[i][j]->id,vectcomb[i][j+1]->id)==-1)){a=-1; break;}
        else a+=gm->getdistance(vectcomb[i][j]->id,vectcomb[i][j+1]->id);
    }
    tabdistance[i]=a;
}
int mini;
mini=rechercherpremierevaleur(tabdistance,villesduparcours.size()-1);
for(int i=mini;i<villesduparcours.size()-1;i++)
{
    if((tabdistance[i]>0)&&(tabdistance[i]<tabdistance[mini])){mini=i;}
}
for(int i =0;i<villesduparcours.size();i++)
{
    cout<<vectcomb[mini][i]->nomville<<endl;
}
cout<<"la distance"<<endl;
cout<<tabdistance[mini];
 }

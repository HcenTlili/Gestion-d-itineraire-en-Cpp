#include <iostream>
#include <stdio.h>
#include<vector>
#include "ville.h"
#include "noeud.h"

#include "route.h"
#include "arete.h"
#include "graphemat.h"
#include "algorithmemat.h"
#include "plusprochevoisin.h"
using namespace std;
int minimum(int tab[100], int a)
{int m;
int i ;
int k;

for(i=0;i<a;i++){if((tab[i]!=0)&&(tab[i]!=-1)){m=tab[i];}}
for(k=0;k<a;k++){if((tab[k]!=0)&&(tab[k]!=-1)&&(tab[k]<m)){m=tab[k];}}
return m ;
}
void plusprochevoisin::resoudre(vector<ville*> villesduparcours,graphe * gm)
{
    int i, j ,k;
    ville * t;
    vector<ville*> vecteurfinal;
    ville * m;
    vecteurfinal.push_back(villesduparcours[0]);
    ville* v;
    v=villesduparcours[0];
    while(vecteurfinal.size()<villesduparcours.size())
    {
        vector<ville*> a;
        a=gm->villesproches(villesduparcours,vecteurfinal,v);
        m=gm->villeplusproche(v,a);
        vecteurfinal.push_back(m);
        v=m;
    }

    for(int k=0;k<vecteurfinal.size();k++)
    {
        cout<<vecteurfinal[k]->nomville<<endl;
    }
    int z;
z=gm->calculerdistance(vecteurfinal);
cout<<"la distance parcourue est "<<endl;
cout<<z<<endl;

}

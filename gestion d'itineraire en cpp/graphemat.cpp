#include <iostream>
#include <vector>
#include "graphemat.h"
#include "arete.h"
using namespace std ;
int sommebouleenne(int a,int b)
{
    if((a==0)&&(b==0)){return 0 ;}
    if((a==1)&&(b==0)){return 1 ;}
    if((a==0)&&(b==1)){return 1 ;}
    if((a==1)&&(b==1)){return 1 ;}

}
//void graphemat::saisir_noeud(ville * n)
//{
//    int a ;
//    string b ;
//    cin>>a;
//    cin>>b ;
//    n->id=a;
//    n->nomville=b;
//
//}

void graphemat::ajouter_noeud(ville* n)
{

//n->id=vecteurnoeuds.size()+1;
//saisir_noeud(n);

vecteurnoeuds.push_back(n);
cout<<vecteurnoeuds[vecteurnoeuds.size()-1]->nomville<<endl;
/*cout<<"hcen";
cout<<vecteurnoeuds.size()<<endl;
cout<<vecteurnoeuds[1]->nomville;
cout<<vecteurnoeuds[1]->id<<endl;
mat[0][0]=vecteurnoeuds[0]->id;
cout<<mat[0][0];*/
}
void graphemat::modifier_noeud(int id,ville * n2)
{

vecteurnoeuds[id]=n2;
//vecteurnoeuds[k]=v;

}
void graphemat::ajouter_arete(route * a)
{
    mat[a->idvilledepart][a->idvillearrivee]=a->distance;
    mat[a->idvillearrivee][a->idvilledepart]=a->distance;
}
/*noeud * graphemat::rechercherNoeud(int idr)
{
    int i ;
    for(i=0;i<=vecteurnoeuds.size();i++)
    {
        if (vecteurnoeuds[i]->id==idr){return vecteurnoeuds[i];}
    }
}*/
//int graphemat::trouver_arete(noeud * n1,noeud * n2)
//{
//    return mat[n1->id][n2->id] ;
//}
bool graphemat::sontConnectes (noeud * n1,noeud * n2)
{int i,j,k,m,p;
 int** matrice;
    matrice= new int*[256];
    for(i=0;i<256;++i)
        matrice[i]=new int[256];


    for(i=0;i<256;++i)
        for(j=0;j<256;++j)
        matrice[i][j]=0;
     cout<<"sont connectés a travers une route quelconque  "<<endl;
   cout<<"sont connectés directement \n"<<endl;
   int a;
   cin>>a;
   switch (a)
    {
        case 1:for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { cout<<mat[i][j]<<"\t";   if (j==vecteurnoeuds.size()-1){cout<<"\n"; } }
}
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { matrice[i][j]=mat[i][j]; }
}
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { if (matrice[i][j]!=0){matrice[i][j]=1;} }
}
cout<<"la matrice d'adjacence est :"<<endl;
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { cout<<matrice[i][j]<<"\t";   if (j==vecteurnoeuds.size()-1){cout<<"\n"; } }
}
for(i=0;i<vecteurnoeuds.size();i++)
{
matrice[i][i]=1;
}

for(m=0;m<vecteurnoeuds.size();m++)
{
for(i=0;i<vecteurnoeuds.size();i++)
{  if(matrice[m][i]==1)
{
    for(j=0;j<vecteurnoeuds.size();j++)
    {
        if(matrice[j][m]==1){for(k=0;k<vecteurnoeuds.size();k++){matrice[j][k]=sommebouleenne(matrice[j][k],matrice[i][k]); }}
    }
}
}
}
cout<<"la matrice d accessibilite est : \n ";
for(i=0;i<vecteurnoeuds.size();i++)
{ for(j=0;j<vecteurnoeuds.size();j++)
   {
    cout<<matrice[i][j]<<"\t";
    if(j==vecteurnoeuds.size()-1){cout<<"\n";}
   }
}
   p=1;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(matrice[i][j]==0){p=0;}
        }
    }
if(p==1){cout<<"LE GRAPHE EST CONNEXE \n";}
else {cout<<"LE GRAPHE N EST PAS CONNEXE \n";}
if(matrice[n1->id][n2->id]==0){cout<<"non , elles sont pas connectees"<<endl;}
else cout<<"oui ,se sont deux villes connectees "<<endl;;

if(matrice[n1->id][n2->id]==0){return 0 ;}
else return 1;


        case 2:for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { cout<<mat[i][j]<<"\t";   if (j==vecteurnoeuds.size()-1){cout<<"\n"; } }
}
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { matrice[i][j]=mat[i][j]; }
}
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { if (matrice[i][j]!=0){matrice[i][j]=1;} }
}
cout<<"la matrice d'adjacence est :"<<endl;
for (i=0;i<vecteurnoeuds.size();i++)
{    for (j=0;j<vecteurnoeuds.size();j++)
    { cout<<matrice[i][j]<<"\t";   if (j==vecteurnoeuds.size()-1){cout<<"\n"; } }
}
for(i=0;i<vecteurnoeuds.size();i++)
{
matrice[i][i]=1;
}
if(matrice[n1->id][n2->id]!=0){cout<<"oui ,se sont deux villes connectees "<<endl;}
else cout<<"non, elles ne sont pas connectes"<<endl;
if(matrice[n1->id][n2->id]==0){return 0 ;}
else return 1;
            break;
}    }
void graphemat::afficher_graphe()
{int i;
    for(i=0;i<vecteurnoeuds.size();i++)
    {
        cout<<vecteurnoeuds[i]->nomville<<endl;
        cout<<vecteurnoeuds[i]->id<<endl;
    }
}
int graphemat::getdistance(int id1,int id2)
{
   return mat[id1][id2];

}
/*void graphemat::modifier_noeud(int a,ville * n2)
{
    vecteurnoeuds[a]->nomville=n2->nomville;
}*/
ville * graphemat::rechercherNoeud(int id)
{
    if (id<vecteurnoeuds.size()){return vecteurnoeuds[id];}
}
void graphemat::setdistance(int a ,int b , int c)
{
    mat[a][b]=c;
}
int graphemat::getsizevecteurnoeuds()
{
    return vecteurnoeuds.size();
}
 void graphemat::afficherroutes()
 {int i,j;
 cout<<vecteurnoeuds.size()<<endl;
     for(i=0;i<vecteurnoeuds.size();i++)
     {
         for(j=0;j<i;j++)
         {
             if(mat[i,j]!=0){cout<<"la route reliant la ville d id "<<i<<"et"<<j<<"est de distance "<<mat[i][j]<<endl;}
         }
     }
 }
 void graphemat::modifier_arete(int a,int b, int c)
 {
     mat[a][b]=c;
     mat[b][a]=c;
 }
 int graphemat::existance(vector<ville*> a,ville * b)
 {
     int c;
     c=0;
     for(int i=0;i<a.size();i++)
     {
         if(a[i]->id==b->id){c=1;}
     }
     return c;
 }
 vector<ville*> graphemat::villesproches(vector<ville*> a,vector<ville*> b,ville * v)
 {   vector<ville*> c;
     int i,j,k;
     for(int i=0;i<a.size();i++)
     {
         if((mat[a[i]->id][v->id])&&(existance(b,a[i])==0)){c.push_back(a[i]);}
     }
     return c;
 }




 ville * graphemat::villeplusproche(ville * v,vector<ville*> a)
 {
     int i ;
     i=0;
     for(int j =1;j<a.size();j++)
     {
         if((getdistance(a[j]->id,v->id))<(getdistance(a[i]->id,v->id))){i=j;}
     }

     return a[i];


 }
 int graphemat::calculerdistance(vector<ville*> a)
 {int b=0;
     for(int i=0;i<a.size()-1;i++)
     {
         b=b+getdistance((a[i]->id),(a[i+1]->id));
     }
     return b;
 }
/*void graphevecteur::modifier_noeud(int a,ville * n2)
{
    vecteurnoeuds[a]->nomville=n2->nomville;
}*/


/*}
/*void modifier_arete (int id,Arete* h)
{
    int a,b,c;
    cin >>a;
    cin >>b;
    cin >>c;
    mat[a][b]=c;
}
*/

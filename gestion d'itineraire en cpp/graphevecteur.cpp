#include <iostream>
#include <vector>
#include "graphevecteur.h"
#include "arete.h"
using namespace std ;
void graphevecteur::ajouter_noeud(ville* n)
{

//n->id=vecteurnoeuds.size()+1;


vecteurnoeuds.push_back(n);
cout<<vecteurnoeuds[vecteurnoeuds.size()-1]->nomville<<endl;
/*cout<<"hcen";
cout<<vecteurnoeuds.size()<<endl;
cout<<vecteurnoeuds[1]->nomville;
cout<<vecteurnoeuds[1]->id<<endl;
mat[0][0]=vecteurnoeuds[0]->id;
cout<<mat[0][0];*/
}
void graphevecteur::ajouter_arete(route * a)
{
    vecteuraretes.push_back(a);
}

int graphevecteur::getdistance(int id1,int id2)
{
 int i ;
 for(i=0;i<vecteuraretes.size();i++)
{
    if (((vecteuraretes[i]->idvilledepart==id1)||(vecteuraretes[i]->idvilledepart==id2))&&((vecteuraretes[i]->idvillearrivee==id1)||(vecteuraretes[i]->idvillearrivee==id2))){return vecteuraretes[i]->distance;}
}
return -1;
}


//void graphevecteur::modifier_noeud(int a,ville * n2)
//{
//    vecteurnoeuds[a]->nomville=n2->nomville;
//}
ville * graphevecteur::rechercherNoeud(int id)
{
    if(id<vecteurnoeuds.size()){return vecteurnoeuds[id];}

}
void graphevecteur::setdistance(int a ,int b , int c)
{
    int i ;
 for(i=0;i<vecteuraretes.size();i++)
{
    if (((vecteuraretes[i]->idvilledepart==a)||(vecteuraretes[i]->idvilledepart==b))&&((vecteuraretes[i]->idvillearrivee==a)||(vecteuraretes[i]->idvillearrivee==b))){vecteuraretes[i]->distance=c;}
}
}


// new fcts

void graphevecteur::modifier_noeud(int id,ville * n2)
{
vecteurnoeuds[id]=n2;
}
/*int graphevecteur::trouver_arete(noeud * n1,noeud * n2)
{
    for(int i=0;i<vecteuraretes.size();i++)
{
    if (((vecteuraretes[i]->idvilledepart==n1->id)||(vecteuraretes[i]->idvilledepart==n2->id))&&((vecteuraretes[i]->idvillearrivee==n1->id)||(vecteuraretes[i]->idvillearrivee==n2->id))){return(vecteuraretes[i]->distance);}
}
return 0;
}*/

void graphevecteur::afficher_graphe()
{int i;
    for(i=0;i<vecteurnoeuds.size();i++)
    {
        cout<<vecteurnoeuds[i]->nomville<<endl;
        cout<<vecteurnoeuds[i]->id<<endl;
    }
}
 int graphevecteur::getsizevecteurnoeuds()
 {
     return vecteurnoeuds.size();
 }
 void graphevecteur::afficherroutes()
 {int i;
     for(i=0;i<vecteuraretes.size();i++)
     {
         cout<<"la route reliant la ville d id "<<vecteuraretes[i]->idvilledepart<<"et"<<vecteuraretes[i]->idvillearrivee<<"est de distance "<<vecteuraretes[i]->distance<<endl;
     }
 }
 int graphevecteur::rechercherroute(int id1, int id2)
  {
      int i ;
 for(i=0;i<vecteuraretes.size();i++)
{
    if (((vecteuraretes[i]->idvilledepart==id1)||(vecteuraretes[i]->idvilledepart==id2))&&((vecteuraretes[i]->idvillearrivee==id1)||(vecteuraretes[i]->idvillearrivee==id2))){
       // cout<<id1<<"et"<<id2<<endl;
    return i;}
}
return -1;
  }
 void graphevecteur::modifier_arete (int a,int b, int c)
 {
     vecteuraretes[rechercherroute(a,b)]->distance=c;
 }
vector<ville*> graphevecteur::villesaproximite(ville * v)
{int i , j , k ;
vector<ville*> a;
for(i=0;i<vecteurnoeuds.size();i++)
{
    if((rechercherroute(v->id,vecteurnoeuds[i]->id)>=0)&&(rechercherroute(v->id,vecteurnoeuds[i]->id)<vecteuraretes.size())){
        //    cout<<v->id<<"et "<<vecteurnoeuds[i]->id<<endl;
            a.push_back(vecteurnoeuds[i]);}
}
return a;
}
int graphevecteur::existanceville(vector<ville*> a,ville * k)
{
    int i,j;
    i=0;
    for(j=0;j<a.size();j++){if(a[j]->id==k->id){i=1;}}
    return i ;
}
vector<ville*> graphevecteur::touteslesvillesatteintes(ville * v)
{
    int i, j ;
    vector<ville*> k;

    vector<ville*> a;
    vector<ville*> b;
    //b=a;
    a=villesaproximite(v);
    while(a.size()!=b.size()){
        b=a;
        for(i=0;i<a.size();i++)
        { k =villesaproximite(a[i]);
            for(j=0;j<k.size();j++)
            {
                if(existanceville(a,k[j])==0){a.push_back(k[j]);}
            }
        }


    }

return a;
}
bool graphevecteur::sontConnectes (noeud * n1,noeud * n2)
{
     int k,i;
vector<ville*> o;
    cout<<"sont connectés a travers une route quelconque  "<<endl;
   cout<<"sont connectés directement \n"<<endl;
     cin>>k;
   switch (k)
    { case 1:int y,z;
        ville *v1;
        ville *v2;
y=n1->id;
z=n2->id;
        v1->id=y;
         v2->id=z;
 cout<<"hcen"<<endl;
  o=touteslesvillesatteintes(v1);

        for(i=0;i<o.size();i++){cout<<o[i]->nomville<<endl;}
        if(existanceville(touteslesvillesatteintes(v1),v2)==0){cout<<"deux villes non connectés avec une route quelconque"<<endl;



        }

        else{cout<<"deux villes connectees avec une route quelconque"<<endl;}
        return existanceville(touteslesvillesatteintes(v1),v2);
        break;
        case 2:
int i ;
bool a=0 ;
for(i=0;i<vecteuraretes.size();i++)
{
    if (((vecteuraretes[i]->idvilledepart==n1->id)||(vecteuraretes[i]->idvilledepart==n2->id))&&((vecteuraretes[i]->idvillearrivee==n1->id)||(vecteuraretes[i]->idvillearrivee==n2->id))){a=1;}
}
return a;
}
}
vector<ville*> graphevecteur::villesproches(vector<ville*> a,vector<ville*> b,ville * v)
{   vector<ville*> c;
    int i,j;
    for(int i=0;i<a.size();i++)
    {
        if((getdistance(a[i]->id,v->id)!=0)&&((getdistance(a[i]->id,v->id)!=-1))&&(existanceville(b,a[i])==0)){c.push_back(a[i]);}
    }
    /*for(int i=0;i<c.size();i++)
    {
        cout<<c[i]->nomville<<endl;
    }*/
    return c;

}
 ville * graphevecteur::villeplusproche(ville * v,vector<ville*> a)
 {int i ;
     i=0;
     for(int j =1;j<a.size();j++)
     {
         if((getdistance(a[j]->id,v->id))<(getdistance(a[i]->id,v->id))){i=j;}
     }

     return a[i];

 }
 int graphevecteur::calculerdistance(vector<ville*> a)
 {
     int b=0;
     for(int i=0;i<a.size()-1;i++)
     {
         b=b+getdistance((a[i]->id),(a[i+1]->id));
     }
     return b;
 }


/*virtual void ajouter_noeud(ville * n);
virtual void ajouter_arete(route * a);
virtual bool sontConnectes (noeud * n1,noeud * n2);
virtual int getdistance(ville* v1,ville * v2);
virtual void afficher_graphe();
virtual void modifier_noeud(int id,ville * n2);
virtual noeud * rechercherNoeud(int id);
virtual void setdistance(int a ,int b , int c);*/

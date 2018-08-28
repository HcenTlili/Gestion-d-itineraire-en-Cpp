#include <iostream>
#include <stdio.h>
#include<vector>
#include "ville.h"
#include "noeud.h"
#include "graphe.h"
#include "route.h"
#include "arete.h"
#include "graphemat.h"
#include "graphevecteur.h"
#include "algorithmemat.h"
#include "string.h"
#include "plusprochevoisin.h"
#include "algorithmehazard.h"
using namespace std;

void gestion_des_villes(graphe * g)
{int b;
string a;
ville* v;
v=new ville;
noeud* n;
n= new noeud;
route * r;
r= new route;

cout<<"\t\t\t\t*****GESTION DES VILLES*****\n\n\n"<<endl;
cout<<"\t\t\t\t 1:SETville\n"<<endl;
cout<<"\t\t\t\t 2:connectivite\n"<<endl;
cout<<"\t\t\t\t 3:afficher les villes\n"<<endl;
cout<<"\t\t\t\t 4:rechercher une ville\n"<<endl;
cout<<"\t\t\t\t 5:modifier une ville\n"<<endl;
cout<<"\t\t\t\t 6:Retour au menu principal\n"<<endl;

cin>>b;
switch(b)
{
 case 1:



int b;


cout<<"donner le nom de la ville a ajouter"<<endl;

cin>>a;
//strcpy(v->nomville,nom_tmp.c_str());



v->nomville=a;
v->id=g->getsizevecteurnoeuds();
g->ajouter_noeud(v);

break;
 case 2:
    ville* n1;
n1=new ville;
ville* n2;
n2=new ville;
int i,j;
cout<<"donner l'id de la 1ere ville"<<endl;
cin>>i;
cout<<"donner l'id de la 2eme ville"<<endl;
cin>>j;
n1->id=i;
n2->id=j;
//g.sontConnectes(n1,n2);
cout<<g->sontConnectes(n1,n2);break;
case 3:g->afficher_graphe();break;
case 4:cout<<" donner lid de la ville a rechercher"<<endl;
cin>>b;
 v=g->rechercherNoeud(b);
 cout<<v->nomville;
 break;
case 5:


cout<<"donner lid de la ville a modifier"<<endl;
cin>>b;
cout<<"donner le nouveau nom"<<endl;

cin>>a;
//strcpy(v->nomville,nom_tmp.c_str());



v->nomville=a;
v->id=b;
//v->id=g->getsizevecteurnoeuds();
g->modifier_noeud(b,v);break;
}
}


/*
cout<<g.vecteurnoeuds[10]->nomville<<endl;break;
 case 2:break;

       case 3:system("cls");v.rechercherville(tab_ville,*nbrvilles,nom);break;
    case 4:v.afficher_villes(tab_ville,*nbrvilles);break;

    case 5: break;
    default: cout<<"faux numero"<<endl;;system("cls");gestion_des_villes(nbrvilles,tab_ville);
*/
void gestion_des_routes(graphe * g)
{

int c ;
route r ;
cout<<"\t\t\t\t*****GESTION DES ROUTES*****\n"<<endl;
cout<<"\t\t\t\t1:SETroute\n"<<endl;
cout<<"\t\t\t\t2:afficher les routes\n"<<endl;
cout<<"\t\t\t\t3:modifier une route\n"<<endl;
cout<<"\t\t\t\t4:supprimer une route\n"<<endl;
cout<<"\t\t\t\t5:GETroute\n"<<endl;
cout<<"\t\t\t\t6:menu principal\n"<<endl;


cout<<"hcen"<<endl;
cin>>c;
switch(c)
{
  case 1:
      cout<<"baa3";
      route * a;
      a=new route;
      int b ;
      cout<<"donner l'id de la route "<<endl;
      cin >> b;
      a->id=b;
       cout<<"donner l'id de la ville de depart "<<endl;
       cin>> a->idvilledepart;
      cout<<"donner l'id de la ville de arrivee "<<endl;
      cin >>a->idvillearrivee;
      cout<<"donner la distance"<<endl;
      cin >> a-> distance;
      g->ajouter_arete(a);break;
  case 2:
    g->afficherroutes();break;
  case 3:int i,j,k;
    cout<<"donner l'id de la ville de depart de la route a modifier"<<endl;
    cin>>i;
    cout<<"donner l'id de la ville d'arrivee de la route a modifier"<<endl;
    cin>>j;
    cout<<"donner la nouvelle distance"<<endl;
    cin>>k;
    g->modifier_arete(i,j,k);
    break;

/*cout<<"\n"<<g.vecteurnoeuds.size()<<endl;
for (int i=0;i<g.vecteurnoeuds.size();i++)
{    for (int j=0;j<g.vecteurnoeuds.size();j++)
    { cout<<g.mat[i][j]<<"\t";   if (j==g.vecteurnoeuds.size()-1){cout<<"\n"; } }
}*/
/*cout<<mat[i][j]<<"\t";
    if(j==g.nvp-1){cout<<"\n";}
break;*/
   /* case 2:system("cls");cout<<"donner l id de la ville de depart"<<endl;
 cin>>r.idvilledepart;cout<<"donner l id de la ville de arrivee"<<endl;cin>>r.idvillearrivee;r.supprimerroute(tab_route,nbrroutes,r);break;
    case 3:  cout<<"hcen"; r.afficheroutes(*nbrroutes,tab_villes,nbrvilles,tab_route);break;
    case 4:system("cls");r.modifierroute(tab_route,nbrroutes);break;


    default:cout<<"choix inexistant"<<endl;*/

}
}


    /*char a[100];
int b;
ville* v;
v=new ville;
cin>>a;
cin>>b;

v->nomville=a;
v->id=b;

cout<<"hcen";


cout<<"hcen";
 graphemat g;

 g.ajouter_noeud(v);
 cin>>a;
cin>>b;

v->nomville=a;
v->id=b;

cout<<"hcen";


cout<<"hcen";


 g.ajouter_noeud(v);
 g.mat =new int*;
for (int i=0;i<g.vecteurnoeuds.size();i++)
{for (int j=0;j<g.vecteurnoeuds.size();j++)
    { g.mat[i][j]=0; }
}
cout<<"\n"<<g.vecteurnoeuds.size()<<endl;
for (int i=0;i<g.vecteurnoeuds.size();i++)
{    for (int j=0;j<g.vecteurnoeuds.size();j++)
    { cout<<g.mat[i][j]<<endl; }
}
cout<<"hcen";



    int a=5;
 char* s;
 s="aaa";
 cout<<"OK"<<endl;
    ville v(s,a);
    cout<<"OK"<<endl;
    cout<< v.nomville;
route r(5 , 6 , 7 ,6);
    cout<<r.idvillearrivee<<endl;
    vector<ville*> vecteurnoeuds;
    vector<route*> vecteuraretes;

    ville c(0,0) ;
    int choixMP;
    int nbrvilles;
    int nbrroutes;
    ville* tab_ville;
    route* tab_route;
route r(0,0,0,0) ;
int nvoy;
graphemat g ;
nbrvilles=1;*/
void calculs_itineraires (graphe * gm)
{int q;

ville c ;
    cout<<"\t\t\t\t1:chercher la pct en utilisant la methode du plus proche voisin\n"<<endl;
   cout<<"\t\t\t\t2:chercher la pct en utilisant la methode des permutations aleatoires \n"<<endl;
    //cout<<"\t\t\t\t3:verifier si le graphe est connexe ou non ' theoreme de ROY-WARSHALL ' \n"<<endl;*/
    cin>>q;
    switch(q)
    {

     /*   case 1:
            vector<ville*> villesduparcours;
        int n;
        cout<<"donner la taille du vecteur"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ville * a;
            int j;
            cout<<"donner l id de la ville "<<i<<endl;
            cin>>j;
            villesduparcours.push_back(gm->rechercherNoeud(j));

        }
        algorithmehazard al;

        al.resoudre(villesduparcours,gm);
 break;*/
        case 1:
             vector<ville*> villesduparcours;
        int n;
        cout<<"donner la taille du vecteur"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ville * a;
            int j;
            cout<<"donner l id de la ville "<<i<<endl;
            cin>>j;
            villesduparcours.push_back(gm->rechercherNoeud(j));

        }
        plusprochevoisin al;

        al.resoudre(villesduparcours,gm);
 break;


    }
}

int main()
{
    graphe * g;
 g=new graphemat;
int choixMP;
int choixdugr;
//graphe * g;
//cout<<"hcen";
//g.mat = new int*;
//int i,j;
//for(i=0;i<)
//cout<<g.mat[0][0];
    //n ligne m colone


do{cout<<"\t\t\t\t\t****** GESTION DITINIRAIRE******\n"<<endl;
   cout<<"\t\t\t\t**** 1 : Graphe matrice **** \n"<<endl;
   cout<<"\t\t\t\t**** 2 : Graphe vecteur **** \n"<<endl;
cout<<"\t\t\t\t**** 4 : sortir de l'application**** \n"<<endl;
    cin>>choixdugr;

    switch (choixdugr)
    {
        case 1:

        break;
        case 2:
           g= new graphevecteur;
//g1 = new graphevecteur;
break;




        /* break;case 4:break;

        default : system("cls");
               cout<<"faux numero"<<endl;*/

    }
}while((choixdugr>3)||(choixdugr<1));

        /////
cout<<"\t\t\t\t\t****** GESTION DITINIRAIRE******\n"<<endl;
do{
   cout<<"\t\t\t\t**** 1 : gerer les villes**** \n"<<endl;
   cout<<"\t\t\t\t**** 2 : gerer les routes **** \n"<<endl;
   cout<<"\t\t\t\t**** 3 : calculer itineraire**** \n"<<endl;
   cout<<"\t\t\t\t**** 4 : sortir de l'application**** \n"<<endl;
    cin>>choixMP;

    switch (choixMP)
    {
        case 1:gestion_des_villes(g);
        break;
        case 2:
gestion_des_routes(g);break;



        case 3:calculs_itineraires(g);break;
        /* break;case 4:break;

        default : system("cls");
               cout<<"faux numero"<<endl;*/

    }
}while(choixMP!=4);





};


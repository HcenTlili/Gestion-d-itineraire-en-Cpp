#ifndef VILLE_H_INCLUDED
#define VILLE_H_INCLUDED
#include "noeud.h"
#include <string.h>
#include "noeud.h"

using namespace std;
class ville :public noeud
{
  private :
  public :
      string nomville ;
    //   void getnomville();


  ville () {};
  ville(string s,int a):noeud(a)
  {
      nomville=s;
  }
  ~ville(){};
 /*char rechercherville(ville *tab_ville,int nbrvilles,char nom[100])
{
cout<<"donner le nom de la ville a rechercher"<<endl;
cin>>nom;
    int i,j=-1 ;
    for (i=0;i<nbrvilles;i++)
    {
        if(strcmp(tab_ville[i].nomville,nom)==0){j=i;};
    }
    if(j!=-1){cout<<"la ville"<<nom<<" existe et son id est"<<j<<endl;}


}*/
ville* setville(int nbrvilles)
{   ville* v;


    v->id=nbrvilles;

    return v;

}
};



#endif // VILLE_H_INCLUDED

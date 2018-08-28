#ifndef NOEUD_H_INCLUDED
#define NOEUD_H_INCLUDED
class noeud
{


    public :
         int id;
         noeud(){};
        noeud(int a)
    {
        id=a;
    };
    ~noeud (){} ;
    int getid()
{
    return id;
}

};





#endif // NOEUD_H_INCLUDED

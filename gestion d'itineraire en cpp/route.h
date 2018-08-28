#ifndef ROUTE_H_INCLUDED
#define ROUTE_H_INCLUDED
#include "arete.h"
class route:public arete
{

    public :
        int distance ;
    int idvilledepart;
    int idvillearrivee;
     /*void getdistanceroute();
    void setdistanceroute();
    void getidvilledepart();
    void setidvilledepart();
    void getidvillearrivee();
    void setidvillearrivee();
    route(){};
    route(int a , int b , int c,int i ): arete(i)
    {
        distance=a;
        idvilledepart=b;
        idvillearrivee=c;
    }*/

};
/*int getdistanceroute(route r)
{
    return r.distance;

}

int getidvilledepart(route r)
{
    return r.idvilledepart;
}
int getidvillearrivee(route r)
{
    return r.idvillearrivee;
}
*/


#endif // ROUTE_H_INCLUDED

#ifndef ARETE_H_INCLUDED
#define ARETE_H_INCLUDED
class arete
{

    public :int id ;
    arete(){};
    virtual ~arete(){};
    int getId();
    arete(int i)
    {
        id=i;
    }
};


#endif // ARETE_H_INCLUDED

#ifndef VECTOR_H
#define VECTOR_H
#include "punto.h"

class vector
{
    public:
        vector();
        vector(punto ,punto);
        vector(vector &o);
        void offset(int , int);
        void print();
        double module();

    //protected:

    private:
        punto start , end;
};

#endif // VECTOR_H

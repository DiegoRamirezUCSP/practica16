#ifndef PUNTOARRAY_H
#define PUNTOARRAY_H
#include "punto.h"


class puntoarray
{
    public:
        puntoarray();
        puntoarray(const punto pts[],
                   const int sizee);
        puntoarray(puntoarray &o);
        int getsize();
        ~puntoarray();
        void print();
        void push_backk(const punto &p);
        void insertt(const int, const punto &);
        void rempve(const int);
    private:
        int sizee;
        punto *points;
        void resizee(int newSize);

};

#endif // PUNTOARRAY_H

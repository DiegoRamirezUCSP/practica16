#include "puntoarray.h"
#include <iostream>

puntoarray::puntoarray()
{
    this->sizee = 0;
    this->points = new punto[sizee];

}
puntoarray::puntoarray(const punto pts[],
                       const int sizee){
    this->sizee = sizee;
    this->points = new punto[sizee];
    for(int i = 0;i < sizee; i++)
        points[i]=pts[i];
}
puntoarray::puntoarray(puntoarray &o){
    this->sizee = o.sizee;
    this->points = new punto[sizee];
    for(int i = 0;i < sizee; i++)
        points[i]=o.points[i];

}

void puntoarray::resizee(int newSize){
    punto *pts = new punto[newSize];
    int minsize = (newSize > sizee)? sizee : newSize;
    for(int i = 0; i < minsize; i++)
        pts[i] = points[i];
    delete[] points;
    sizee = newSize;
    points = pts;
        }
void puntoarray::insertt(const int pos,const punto &point){
    resizee(sizee + 1);
  for(int i = sizee-1; i > pos; i--)
        points[i] = points[i-1];
    points[pos] = point;
    }


void puntoarray::rempve(const int quitar){
  // points[quitar] = points[]

}
void puntoarray::push_backk(const punto &p){
    resizee(sizee+1);
    points[sizee-1] = p;
}

int puntoarray::getsize(){
    return sizee;
}
puntoarray::~puntoarray()
{
    delete[] points;
    }

void puntoarray::print(){
    for(int i=0;i < sizee;i++){
        points[i].print();
        if(i == sizee - 1)
            std::cout << " ";
        else
            std::cout << " , ";
          }

    }

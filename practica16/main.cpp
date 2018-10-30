#include <iostream>
#include "punto.h"
#include "vector.h"
#include "puntoarray.h"

using namespace std;

void swap1(punto &p, punto &q){
    punto temp = p;
    p = q;
    q = temp;
}

void swap2(punto *p, punto *q){
    punto temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
/*
   punto p(3, 5);
   punto q(1, 4);
   punto z = q;
    punto *ptr1 = &p;
    punto *ptr2 = &q;
    punto **ptr3 = &ptr1;
    punto **ptr4 = &ptr2;
    (*ptr3)->print();//usa la flecha para no mostrar (*ptr1).print();
    (*ptr4)->print();//usa la flecha para no mostrar (*ptr2).print();
    swap2(ptr1,ptr2);
    ptr1->print();
    ptr2->print();
    swap1(p,q);
    p.print();
    q.print();
    punto *easy = new punto;
    easy->offset(11, 20);
    easy->print();
    delete easy;
    vector r(p,q);
    r.print();
    cout << r.module() << endl;
*/

   punto p(3, 5);
   punto q(14, 34);
   punto a(156, 14);
   punto t(21,53);
   punto aa(2,1);
   punto gg(66,66);
    punto e(21,51);
   const punto r[]={p,q,a};
   int size = sizeof(r)/sizeof(r[0]);
   puntoarray pa(r,size);
    cout << pa.getsize() << endl;
    puntoarray pa2 = pa;
    cout << pa2.getsize() << endl;
    pa.push_backk(t);
    //pa.push_backk(aa);
    //pa.push_backk(gg);
    //pa.push_backk(e);
    pa.insertt(1,p);
    pa.print();
    return 0;

    }

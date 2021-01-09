
#include "ArrayList.h"
#include <iostream>

int main(){
    list l = ArrayList_new(5);
    pushback_ArrayList(l, 1);
    pushback_ArrayList(l, 2);
    pushback_ArrayList(l, 3);
    pushback_ArrayList(l, 4);
    pushback_ArrayList(l, 5);
    
    
    list b = ArrayList_new(6);
    pushback_ArrayList(b, 6);
    pushback_ArrayList(b, 7);
    pushback_ArrayList(b, 8);
    pushback_ArrayList(b, 9);
    pushback_ArrayList(b, 10);
    pushback_ArrayList(b, 11);
    
    list c = ArrayList_Merge(l, b);
    
    print(c);
    
    list d = ArrayList_new(0);
    list f = ArrayList_new(0);
    list c2 = ArrayList_Merge(f,d);
    std::cout << "Qui eseguo merge di due array vuotI, mi aspetto nulla nella stampa " << std::endl;
    print(c2);
    delete_ArrayList(c);
    delete_ArrayList(l);
    delete_ArrayList(b);
    delete_ArrayList(c2);
    delete_ArrayList(f);
    delete_ArrayList(d);
}

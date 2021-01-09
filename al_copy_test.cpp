
#include "ArrayList.h"
#include <iostream>

int main(){
    list l = ArrayList_new(5);
    pushback_ArrayList(l, 1);
    pushback_ArrayList(l, 2);
    pushback_ArrayList(l, 3);
    pushback_ArrayList(l, 4);
    pushback_ArrayList(l, 5);
    
    
    
    list c = ArrayList_copy(l);
    
    print(c);
    list b = ArrayList_new(0);
    list c2 = ArrayList_copy(b);
    std::cout << "Qui eseguo la stampa della copy, essendo vuota non stampa nulla" << std::endl;
    print(c2);
    delete_ArrayList(b);
    delete_ArrayList(c2);
    delete_ArrayList(c);
    delete_ArrayList(l);
    
}

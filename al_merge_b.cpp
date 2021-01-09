
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
  
    
    list c = ArrayList_Merge(b, l);
    
    print(c);
    delete_ArrayList(l);
    delete_ArrayList(c);
    delete_ArrayList(b);
}

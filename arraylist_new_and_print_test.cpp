#include "ArrayList.h"
#include <iostream>


int main(){
   list l = ArrayList_new(5);
   pushback_ArrayList(l, 5);
   pushback_ArrayList(l, 4);
   pushback_ArrayList(l, 3);
   pushback_ArrayList(l, 2);
   pushback_ArrayList(l, 1);
 
    print(l);
    delete_ArrayList(l);
   
}

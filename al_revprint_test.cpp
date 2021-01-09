#include "ArrayList.h"
#include <iostream>


int main(){
   list l = ArrayList_new(5);
   pushback_ArrayList(l, 1);
   pushback_ArrayList(l, 2);
   pushback_ArrayList(l, 3);
   pushback_ArrayList(l, 4);
   pushback_ArrayList(l, 5);
 
    std::cout << "Faccio la print " << std::endl;
    print(l);
    
    std::cout << "Ora provo la reverse print " << std::endl;
    reverse_print(l);
    delete_ArrayList(l);
   
}

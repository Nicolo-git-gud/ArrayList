#include "ArrayList.h"
#include <iostream>
#include <string>


int main(){
   list l = ArrayList_new(5);
   pushback_ArrayList(l, 1);
   pushback_ArrayList(l, 2);
   pushback_ArrayList(l, 3);
   pushback_ArrayList(l, 4);
   pushback_ArrayList(l, 5);
 
    print(l);
    std::cout << std::endl;
    popback(l);
    print(l);
    std::cout << std::endl;
    popback(l);
    print(l);
    std::cout << std::endl;
    popback(l);
    print(l);
    std::cout << std::endl;
    popback(l);
    print(l);
    std::cout << std::endl;
    popback(l);
    std::cout << "Stampo lista vuota"<<std::endl;
    print(l);
    
   delete_ArrayList(l);
    

}

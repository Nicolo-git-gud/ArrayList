#include "ArrayList.h"
#include <iostream>
#include <string>

int main(){
    list l = ArrayList_new(0);
    try{ pushback_ArrayList(l, 5);
    }
    catch(std::string err) {
        std::cout << "Array ha raggiunto la capacity massima" << std::endl;
    }
    
    delete_ArrayList(l);
    
    
    
}

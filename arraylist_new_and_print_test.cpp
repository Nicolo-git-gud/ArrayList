#include "ArrayList.h"
#include <iostream>


int main(){
   list l = ArrayList_new(5);
    print(l);
    delete_ArrayList(l);
   
}
//Se eseguo questo con g++... ecc  mi stampa 5 zeri

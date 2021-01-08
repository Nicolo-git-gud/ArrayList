#include "ArrayList.h"
#include <iostream>

list ArrayList_new(int c){
    list l = new ArrayList;
    l->a = new int[c];
    l->capacity = c;
    return l;
}
void print(list &l){
    for(int i=0;i<l->capacity;i++)
        std::cout << l->a[i] << std::endl;
}

void delete_ArrayList(list &l){
    delete [] l->a;
    delete l;
}

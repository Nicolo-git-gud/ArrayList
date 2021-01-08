#include "ArrayList.h"
#include <iostream>

list ArrayList_new(int c){
    list l = new ArrayList;
    l->a = new int[c];
    l->capacity = c;
    l->lenght = 0;
    return l;
}
void print(list &l){
    for(int i=0;i<l->lenght;i++)
        std::cout << l->a[i] << std::endl;
}

void delete_ArrayList(list &l){
    delete [] l->a;
    delete l;
}
void pushback_ArrayList(list &l,int x){
    l->lenght++;
    if (l->lenght > l->capacity){
        std::string err;
        throw err;
    }
    int i = 0;
    while(i < l->lenght - 1)
        i++;
    l->a[i] = x;
    return;
}

int popback(list &l){
    if(l->lenght == 0){
        std::string err; 
        throw err;
    }
    int i = 0;
    while(i < l->lenght - 1)
        i++;
    int x = l->a[i];
    l->lenght --;
    return x;
}

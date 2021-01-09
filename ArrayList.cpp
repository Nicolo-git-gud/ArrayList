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
void reverse_print(list &l){
    for(int i=l->lenght-1;i>=0;i--)
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
list ArrayList_copy(list &A){
    if(A->lenght == 0)
        return ArrayList_new(0);

    list C=ArrayList_new(A->lenght);
        for (int i=0; i< A->lenght; i++)
            C->a[i] = A->a[i];
        C->lenght = C->capacity;
        return C;
}
list ArrayList_Merge(list &A, list &B){
    
    if (A->lenght == 0 && B->lenght == 0)
        return ArrayList_new(0);
    if(B->lenght==0){
        list C=ArrayList_new(A->lenght);
        for (int i=0; i< A->lenght; i++)
            C->a[i] = A->a[i];
        C->lenght = C->capacity;
        return C;
    }
    if(A->lenght == 0){
         list C=ArrayList_new(B->lenght);
        for (int i=0; i< B->lenght; i++)
            C->a[i] = B->a[i];
        C->lenght = C->capacity;
        return C;
    }
    int copy_lenght= (A->lenght + B->lenght);
    list C= ArrayList_new(copy_lenght);
    for(int i=0;i<A->lenght;i++)
        C->a[i] = A->a[i];
    int i = A->lenght;
        for(int j=0;j<B->capacity; j++){
        C->a[i] = B->a[j];
        i++;
        }
        C->lenght = C->capacity;
    return C;
}


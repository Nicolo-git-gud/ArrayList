#include "ArrayList.h"
#include <iostream>
#include <string>


int main(){
    list l = ArrayList_new(5);//voglio la conferma che per il popback interessi solo la lenght che ho e non la capacity
    
    try{
        popback(l);
    }
    catch(std::string err){
        std::cout << "Gestione errore popback lista vuota eseguita correttamente" << std::endl;
    }
    delete_ArrayList(l);
    
    
}

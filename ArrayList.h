

#ifndef ArrayList_h
#define ArrayList_h

struct ArrayList{
    int capacity;
    int *a;
};
typedef ArrayList *list;

list ArrayList_new(int c);
void print(list &l);
void delete_ArrayList(list &l);








#endif  

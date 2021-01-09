

#ifndef ArrayList_h
#define ArrayList_h

struct ArrayList{
    int capacity;
    int lenght;
    int *a;
};
typedef ArrayList *list;

list ArrayList_new(int c);
void pushback_ArrayList(list &l,int x);
void print(list &l);
void delete_ArrayList(list &l);
int popback(list &l);
list ArrayList_copy(list &A);
list ArrayList_Merge(list &A, list &B);
void reverse_print(list &l);





#endif  

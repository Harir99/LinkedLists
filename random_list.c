#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* random_list (int num){
    int i=0;
    Node * newList=NULL;
    for(i=0;i<num;i++){
        Node* ptr = malloc(sizeof(Node));
        ptr -> value = rand()%10 + 0; /* set a value to random number */
        ptr -> key1 = (50.0-10.0)*rand_double()+10.0; /* set limits for double rand */
        ptr -> key2 = (90.0-50.0)*rand_double()+50.0;
        ptr->sort1 =NULL;
        ptr->sort2 =NULL;
        newList= addToBack(newList,ptr); /* move to next element */
    }

    return newList;
}

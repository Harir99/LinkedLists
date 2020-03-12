#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void replace_list (Node*list){
    Node* current = list;
    int i = 0;
    while( current != NULL){
        i++;

        if(i%3==0){
            current->value = current->value*10; /*for every third node replace the nodes value by its current value times 10*/
        }

        current = current->next;/* move to next element*/
    }


}

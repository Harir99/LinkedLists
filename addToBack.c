#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node *  addToBack(Node * list, Node * toAdd){
    if(list == NULL) { /* if the list is null */
        list = toAdd;
    }
    else {
        Node * current = list;
        while (current ->next != NULL) { /* if its not empty */
            current = current -> next; /* then keep going till you reach last element*/
        }
        current->next = toAdd; /* add an element to add to the end of the list */
    }
    return list;
}

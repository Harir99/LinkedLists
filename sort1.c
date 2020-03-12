#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* sort1(Node*list){
    Node* sort1_head = list;
    Node* current = list->next;
    while(current != NULL){
        if(current->key1 < sort1_head->key1){
            Node * newSmallest = current;
            /* if current is smaller than current smallest number , then set the current to be the smallest number */
            newSmallest ->sort1 = sort1_head;
            sort1_head = newSmallest; /* then the prev smallest number will point at the current smallest number */

        }else {
            Node * ptr1 = sort1_head;
            Node * ptr2 = sort1_head->sort1;
            int foundMatch=0;
            while(ptr2!=NULL){

                /*if current is between the two*/
                if(current->key1 > ptr1->key1 && current->key1 < ptr2->key1){
                    ptr1->sort1=current; /*  current is bigger than ptr1, then get ptr1 to point at current */
                    current->sort1=ptr2; /* since current is less than ptr2, then current points at ptr2*/
                    foundMatch=1;
                }
                ptr1 = ptr1->sort1;
                ptr2 = ptr2->sort1;


            }
            if(foundMatch!=1){ /* if we reached end of list */
                ptr1->sort1=current;  /* then set ptr1 ( who used ot point at null to point at current now */
            }
        }

        current =current->next;/* move to next element */
    }
    return sort1_head;
}

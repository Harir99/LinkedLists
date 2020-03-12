#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* sort2(Node*list){
    Node* sort2_head = list;
    Node* current = list->next;
    while(current != NULL){
        if(current->key2 < sort2_head->key2){
            Node * newSmallest = current;
            /* if current is smaller than current smallest number , then set the current to be the smallest number */

            newSmallest ->sort2 = sort2_head;
            sort2_head = newSmallest; /* then the prev smallest number will point at the current smallest number */

        }else {
            Node * ptr1 = sort2_head;
            Node * ptr2 = sort2_head->sort2;
            int foundMatch=0;
            while(ptr2!=NULL){

                //if current is between the two
                if(current->key2>ptr1->key2 && current->key2<ptr2->key2){
                    ptr1->sort2=current;/*  current is bigger than ptr1, then get ptr1 to point at current */
                    current->sort2=ptr2;/* since current is less than ptr2, then current points at ptr2*/
                    foundMatch=1;
                }
                ptr1 = ptr1->sort2;
                ptr2 = ptr2->sort2;


            }
            if(foundMatch!=1){/* if we reached end of list */

                ptr1->sort2=current;  /* then set ptr1 ( who used ot point at null to point at current now */
            }
        }

        current =current->next;/* move to next element */
    }
    return sort2_head;
}

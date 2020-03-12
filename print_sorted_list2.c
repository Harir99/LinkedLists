#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void print_sorted_list2(Node*list){

    Node* current = list;

    while(current != NULL){
        printf("{ ");
        printf("%2d, ",current -> value);
        printf("%5lf, ",current -> key1);
        printf("%5lf",current -> key2);
        current = current->sort2;
        printf(" }\n");

    }


}

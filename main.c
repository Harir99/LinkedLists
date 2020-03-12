#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char **argv) {
    Node* head;
    int length;
    printf("how many nodes do you wish to be created? (please pick an integer larger than 5)\n");
    scanf("%d",&length);
        head = random_list(length);
        Node * sort1List= sort1(head);
        Node * sort2List= sort2(head);
        printf("next links :\n");
        print_list(head);
        printf("\n");
        printf("Sort1 :\n" );
        print_sorted_list(sort1List);
        printf("\n");
        printf("Sort2 :\n" );
        print_sorted_list2(sort2List);
        replace_list(head);
        printf("\n");
        printf("-------------------------------");
        printf("\n");
        printf("\nTraversed next links :\n");
        print_list(head);
        printf("\n");
        printf("Sort1 :\n" );
        print_sorted_list(sort1List);
        printf("\n");
        printf("Sort2 :\n" );
        print_sorted_list2(sort2List);

    return 0;
}

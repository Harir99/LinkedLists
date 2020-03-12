struct NODE {
int value;
double key1;
double key2;
struct NODE * next;
struct NODE * sort1;
struct NODE * sort2;
};
typedef struct NODE Node;

Node* random_list (int num);
double rand_double();
Node *  addToBack(Node * list, Node * toAdd);
void print_list(Node*list);
void print_sorted_list(Node*list);
void print_sorted_list2(Node*list);
Node* sort1(Node*list);
Node* sort2(Node*list);
void replace_list(Node*);

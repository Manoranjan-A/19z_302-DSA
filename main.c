// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// struct node * getnode(int data){
//     struct node *temp = (struct node*)malloc(sizeof(struct node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// void printlist(struct node * headpointer){
//     struct node *temp = headpointer;
//     while (temp != NULL){
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// void newlinkedlistatx(struct node * mainheadpointer, int length, int flag){
//     // create a new linked list with length where every value is a square of its index
//     struct node *head = NULL;
//     struct node *tempnode = NULL;
//     for (int i = 0; i < length; i++){
//         if (head == NULL){
//             head = getnode(100+i);
//             tempnode = head;
//         }
//         else{
//             tempnode->next = getnode(100+i);
//             tempnode = tempnode->next;
//         }
//     }

//     while (mainheadpointer->data != flag){
//         mainheadpointer = mainheadpointer->next;
//     }
//     struct node * dataretain;
//     dataretain = mainheadpointer->next;
//     mainheadpointer->next = head;

//     while (head->next != NULL){
//         head = head->next;
//     }
//     head->next = dataretain;
//     // printlist(mainheadpointer);
// }

// int main(){
//     struct node *head = NULL;
//     struct node *tempnode = NULL;
//     int length = 10;
//     // insert 10 elements using forloop
//     for (int i = 0; i < length; i++){
//         if (head == NULL){
//             head = getnode(i);
//             tempnode = head;
//         }
//         else{
//             tempnode->next = getnode(i);
//             tempnode = tempnode->next;
//         }
//     }
//     printlist(head);
//     newlinkedlistatx(head,10, 5);
//     printlist(head);
// }

//create a node and delete the 1st node (create a function called deletefirstnode)

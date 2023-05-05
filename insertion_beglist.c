#include<stdio.h>
#include<stdlib.h>

int main () {

    struct Node {
        int data;
        struct Node *next;
    };

    struct Node *head;
    head = (struct Node*)malloc(sizeof(struct Node*));
   

    struct Node *newNode;
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node*));

    int n;
    printf("No.of ele to be added initially:\n");
    scanf("%d",&n);

    /*TO INSERT ELE INITIALY*/

    for (int i = 0;i < n;i ++) {
        newNode = (struct Node*)malloc(sizeof(struct Node*));
        printf("Enter ele %d\n",i + 1);
        scanf("%d",&(newNode -> data));
        newNode -> next = NULL;

        if (head == NULL) {
            head = newNode;
        }

        else {
            temp = head;
            while (temp -> next != NULL){
                temp = temp -> next;
            }

            temp  -> next = newNode;
        }
        temp = NULL;
    }

    /*ADD ELE AT THE BEGINNING*/

    newNode = (struct Node*)malloc(sizeof(struct Node*));
    temp = head;

    printf("Enter ele to be added at beginning:\n");
    scanf("%d",&(newNode -> data));/*ELE TO BE ADDED*/
  
    temp = head;
    newNode -> next = temp;
    head = newNode;

   /*TO DISPLAY ELE*/
    temp = head;
    printf("Displaying ele:\t");
    while(temp -> next != NULL) {
        printf("%d\t",temp -> data);
        temp = temp -> next;
    }
    printf("%d\n",temp -> data);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main () {
    struct Node {
        int data;
        struct Node * next;
    };

    struct Node *head;
    head = (struct Node*)malloc(sizeof(struct Node*));
    head -> next = NULL;
    struct Node *newNode;
    struct Node *temp;
    
    int n;
    printf("Enter No.of Ele to be inserted:\n");
    scanf("%d",&n);
    for (int i = 0;i < n;i ++) {   /*To insert ele*/
        temp = (struct Node*)malloc(sizeof(struct Node*));
        newNode = (struct Node*)malloc(sizeof(struct Node*));
        printf("Enter ele %d:\n",(i + 1));
        scanf("%d",&(newNode -> data));
        newNode -> next = NULL;

        if (head -> next == NULL){
            head -> next = newNode;
        }

        else {
            temp -> next = head;
            while (temp -> next != NULL) {
                temp = temp -> next;
            }

        }

        temp -> next = newNode;
    }

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
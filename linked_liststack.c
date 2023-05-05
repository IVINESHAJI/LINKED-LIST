#include <stdio.h>
#include <stdlib.h>

int main () {
    struct Node {
        int data;
        struct Node* next;
    };

    /*ADD ELE*/

    int n;
    printf("Enter the No.of ELe:\n");
    scanf("%d",&n);

    struct Node* top;
    top = (struct Node*)malloc(sizeof(struct Node*));
    top = NULL;

    struct Node* newNode;

    for(int i = 0;i < n;i ++){
        newNode = (struct Node*)malloc(sizeof(struct Node*));
        printf("Enter ELE %d:\n",(i + 1));
        scanf("%d",&(newNode -> data));
        newNode -> next = NULL;

        if (top == NULL) {
            top = newNode;
        }

        else {
            newNode -> next = top;
            top = newNode;
        }
    }

    /*PEEK*/
    if (top != NULL) {
        printf("Peek ele is:%d\n",top -> data);
    }

    else{
        printf("NO ELE IN STACK");
    }

    /*TO POP ELE*/

    if (top != NULL) {  /*TO CHECK WHETHER THERE ARE ELE*/
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node*));
        printf("Ele are:\t");
        while(top -> next != NULL){
            printf("%d\t",top -> data);
            temp = top; 
            top = top -> next;
            free(temp);
        }
        printf("%d",top -> data);
        free(top);
        top = NULL;
        
    }

    else {   /*IF NO ELE*/
        printf("UNDERFLOW");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
    struct Node {
        int data;
        struct Node* next;
    };

    struct Node *front,*rear,*newNode;

    front  = (struct Node *)malloc(sizeof(struct Node *));
    
    front = NULL;rear = NULL;

    int n;
    printf("Enter no.of ele:\n");
    scanf("%d",&n);

    for (int i = 0;i < n;i ++) {

        newNode  = (struct Node *)malloc(sizeof(struct Node *));
        printf("Enter ele %d:\n",(i + 1));
        scanf("%d",&(newNode -> data));
        newNode -> next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = front;
        }

        else {
            rear -> next = newNode;
            rear = rear -> next;
        }

    }

    /*TO DIPLAY ELE*/
    printf("Ele are : ");
    while (front != rear) {
        printf("%d\t",front -> data);
        front  = front -> next;
    }
    printf("%d",rear -> data);
    return 0;
}
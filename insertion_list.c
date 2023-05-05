#include <stdio.h>
#include <stdlib.h>

int main () {

    struct Node {
        int data;
        struct Node *next;
    };

    struct Node *head;
    head = (struct Node*)malloc(sizeof(struct Node*));
    head = NULL;

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

    /*TO INSERT AFTER nth POSITION*/

    printf("Enter after which position the ele is to be added:\n");
    scanf("%d",&n);

    temp = head;

    for(int i = 1;i < n;i ++){
        temp = temp -> next;
    }

    newNode = (struct Node*)malloc(sizeof(struct Node*));

    newNode -> next = temp -> next;/*ADDRESS OF (n + 1)th ELE*/
    temp -> next = newNode;/*ADDRESS OF ADDED ELE*/
    printf("Enter the ele to be added:\n");
    scanf("%d",&(newNode -> data));

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

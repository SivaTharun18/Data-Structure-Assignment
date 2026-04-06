#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void addDocument() {
    int x;
    if (rear == MAX - 1)
        printf("Queue Full\n");
    else {
        printf("Enter document ID: ");
        scanf("%d", &x);
        if (front == -1) front = 0;
        queue[++rear] = x;
    }
}

void printDocument() {
    if (front == -1 || front > rear)
        printf("No documents to print\n");
    else
        printf("Printing document: %d\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear)
        printf("No pending documents\n");
    else {
        printf("Pending documents: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Add 2.Print 3.Display 4.Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1: addDocument(); break;
            case 2: printDocument(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
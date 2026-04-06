#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    
    for (int i = 0; i < len; i++)
        push(str[i]);

    
    for (int i = 0; i < len; i++)
        str[i] = pop();

    printf("Reversed string: %s", str);

    return 0;
}
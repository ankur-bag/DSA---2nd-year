#include <stdio.h>
#include <ctype.h>

#define SIZE 50

char stack[SIZE];
int top = -1;

// Push operation
void push(char x) {
    stack[++top] = x;
}

// Pop operation
char pop() {
    return stack[top--];
}

// Check operator precedence
int priority(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main() {
    char infix[50], postfix[50];
    int i = 0, k = 0;
    char ch;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    while ((ch = infix[i++]) != '\0') {

        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }

        // If '(' push to stack
        else if (ch == '(') {
            push(ch);
        }

        // If ')', pop until '('
        else if (ch == ')') {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop(); // remove '('
        }

        // If operator
        else {
            while (top != -1 && priority(stack[top]) >= priority(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
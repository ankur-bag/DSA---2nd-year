#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int choice;

    printf("1. Factorial of a number\n");
    printf("2. GCD of two numbers\n");
    printf("3. Tower of Hanoi\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int n;
            printf("Enter a number: ");
            scanf("%d", &n);
            printf("Factorial = %d\n", fact(n));
            break;
        }
        case 2: {
            int a, b;
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);
            printf("GCD = %d\n", gcd(a, b));
            break;
        }
        case 3: {
            int n;
            printf("Enter the number of disks: ");
            scanf("%d", &n);
            printf("Sequence of moves:\n");
            towerOfHanoi(n, 'A', 'C', 'B');
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

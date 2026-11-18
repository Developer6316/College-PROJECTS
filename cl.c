#include<stdio.h>
int main() {
    int a,b,fin;
    char ch;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the operator (+, -, *, /):");
    scanf(" %c", &ch);
    switch(ch){
        case '+':
            fin = a + b;
            break;
        case '-':
            fin = a - b;
            break;
        case '*':
            fin = a * b;
            break;
        case '/':
            fin = a / b;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }
    printf("The result is: %d\n", fin);
    return 0;
}
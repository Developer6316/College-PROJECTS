#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 1000.0, amount;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Wrong PIN. Bye!\n");
        return 0;
    }

    while (1) {
        printf("\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: %.2f\n", balance);
        }
        else if (choice == 2) {
            printf("Amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("New balance: %.2f\n", balance);
        }
        else if (choice == 3) {
            printf("Amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance)
                printf("Not enough money!\n");
            else {
                balance = balance - amount;
                printf("New balance: %.2f\n", balance);
            }
        }
        else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Wrong choice, try again.\n");
        }
    }

    return 0;
}
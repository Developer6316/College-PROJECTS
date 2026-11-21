#include <stdio.h>

int main() {
    int choice;
    char feedback[200], ch;
    FILE *fp;

    while (1) {
        printf("\n1. Give feedback\n2. View all feedback\n3. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            fp = fopen("feedback.txt", "a");
            if (fp == NULL) {
                printf("Cannot open file!\n");
                continue;
            }
            printf("Enter your feedback: ");
            scanf("%[^\n]", feedback);   /* reads the whole line, spaces included */
            fprintf(fp, "%s\n", feedback);
            fclose(fp);
            printf("Thanks! Feedback saved.\n");
        }
        else if (choice == 2) {
            /* READ mode: prints everything in the file */
            fp = fopen("feedback.txt", "r");
            if (fp == NULL) {
                printf("No feedback yet.\n");
                continue;
            }
            printf("\n--- All Feedback ---\n");
            while ((ch = fgetc(fp)) != EOF) {
                putchar(ch);
            }
            fclose(fp);
        }
        else if (choice == 3) {
            printf("Bye!\n");
            break;
        }
        else {
            printf("Wrong choice.\n");
        }
    }

    return 0;
}

#include<stdio.h>
struct Student {
    char name[50];
    long int age;
    long int rollno;
    float mark;
};
int main() {
    printf("--------Student Database--------\n");
    printf("Enter the number of students: ");
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++) {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter age of student %d: ",i+1);
        scanf("%d",&s[i].age);
        printf("Enter roll number of student %d: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter marks of student %d: ",i+1);
        scanf("%f",&s[i].mark);
    }
    printf("\n--------Student Details--------\n");
    for(int i=0;i<n;i++) {
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n",s[i].age);
        printf("Roll Number: %d\n",s[i].rollno);
        
        printf("Marks: %.2f\n",s[i].mark);
        printf("-------------------------------\n");
    }
    return 0;
}
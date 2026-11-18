#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[]){
    if(argc!=7){
        printf("Usage: filename name mark1 mark2 mark3 mark4 mark5\n");
        return 0;
    }
    int total=0;
    float avg =0;
    char name[30];
    strcpy(name,argv[1]);
    int m1=atoi(argv[2]);
    int m2=atoi(argv[3]);
    int m3=atoi(argv[4]);
    int m4=atoi(argv[5]);
    int m5=atoi(argv[6]);
    total = m1 + m2 + m3 + m4 + m5;
    avg = total/ 5;
    printf("-----------Student Report-----------\n");
    printf("Student Name : %s\n",name);
    printf("Mark1 : %d\n",m1);
    printf("Mark2 : %d\n",m2);
    printf("Mark3 : %d\n",m3);
    printf("Mark4 : %d\n",m4);
    printf("Mark5 : %d\n",m5);
    printf("Total marks : %d\n",total);
    printf("Average marks : %.2f\n",avg);
    if(m1<35 || m2<35 || m3<35 || m4<35 ||m5<35){
        printf("FAIL\n");
    }
    else{
        printf("PASS\n");
    }
    if(avg>90){
        printf("GRADE : A\n");
    }
    else if(avg<90 && avg>=70){
        printf("GRADE : B\n");
    }
    else if(avg<70 && avg<=50){
        printf("GRADE : C\n");
    }
    else if(avg<50){
        printf("GRADE : D\n");
    }
    return 0;
}
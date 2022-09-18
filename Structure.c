#include <stdio.h>
void main(){
    struct Student {
        int dno;
        char name[50];
        float avg;
    };
    struct Student s = {44,"Jerome",71.88};


    printf("Details of student is %d\t%s\t\t%f",s.dno,s.name,s.avg);

}


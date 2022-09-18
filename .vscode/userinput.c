#include<stdio.h>
int main(){
    char name[20],lname[20];
    printf("Enter the first name");
    scanf("%s",name);

    printf("Enter the second name");
    scanf("%s",lname);

    printf("Your Name is %s %s",name,lname);
    return 0;
}
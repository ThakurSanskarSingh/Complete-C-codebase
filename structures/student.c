#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int roll;
    float cgpa ;

}std;
int main () {
    std s1;
    printf("Enter NAme : \n");
    gets(s1.name);
    printf("Enter roll : ");
   scanf("%d",&s1.roll);
    

  




    printf("Student Name : %s \n",s1.name);
    printf("Student roll no . : %d \n",s1.roll);
    // printf("Student cgpa : %f",&s1.cgpa);
    
 
    return 0;
}

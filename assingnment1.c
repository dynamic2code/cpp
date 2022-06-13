#include <stdio.h>
#include <string.h>
int main(){
    int cat;
    int exam;
    float marks;
    

    printf("Enter an cat: ");
    scanf("%d", &cat); 

    printf("Enter an exam: ");
    scanf("%d", &exam); 

    marks = cat + exam;

    if(70 <= marks <= 100){
        printf("The grade = A \n");
    }else if (60 <= marks <= 69)
    {
        printf("The grade = B \n");
    }else if (50 <= marks <= 59)
    {
        printf("The grade = C \n");
    }else if (40 <= marks <= 49)
    {
        printf("The grade = D \n");
    }else{
        printf("The grade = F \n");
    }
    

    if (marks >= 40){
        printf(" You have a pass \n" );
    }else{
        printf("You have a fail \n ");
    }

    printf("Total marks = %f", marks);
    
  

    return 0;
}


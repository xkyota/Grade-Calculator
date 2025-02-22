#include <stdio.h> 

int main(void){
    int score;

    printf("Enter your score >>> ");
    scanf("%d", &score); 

    if (score >= 90)
    {
        printf("Your grade is A \n"); 
    }else if ((score >= 80) && (score <= 89))
    {
        printf("Your grade is B \n"); 
    } else if ((score >= 70) && (score <= 79))
    {
        printf("Your grade is C \n"); 
    }else{ 
        printf("Your grade is F \n"); 
    }

    return 0; 
}
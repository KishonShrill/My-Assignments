#include <stdio.h>
int main(){
    //declaring that the said variables is this type of numbers
    float score1, score2, score3, aveGrade;

    //Asks for your inputs
    printf("Wanna know your average score?\n");
    printf("Enter your first score: ");
    scanf("%f", &score1);
    printf("Enter your second score: ");
    scanf("%ff", &score2);
    printf("Enter your third score: ");
    scanf("%ff", &score3);

    //Computing the average
    aveGrade = (score1 + score2 + score3) / 3;

    //Visually outputs the average grade
    printf("\nYour average score is = %.2f", aveGrade);

    return 0;
}
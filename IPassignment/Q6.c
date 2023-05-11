#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer, total, percentage;
    char grade;

    printf("Enter marks of Physics, Chemistry, Biology, Mathematics, and Computer:\n");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    total = physics + chemistry + biology + mathematics + computer;

    percentage = (total / 500) * 100;

    if (percentage >= 90){
        grade = 'A';
    }
    else if (percentage >= 80){
        grade = 'B';
    }
    else if (percentage >= 70){
        grade = 'C';
    }
    else if (percentage >= 60){
        grade = 'D';
    }
    else if (percentage >= 40){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}

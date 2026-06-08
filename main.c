//AS20250422//

#include <stdio.h>


int main() {
    float math, science, english;
    float total, average;
    char grade;


    printf("Enter marks for Mathematics (0-100): ");
    scanf("%f", &math);

    printf("Enter marks for Science (0-100): ");
    scanf("%f", &science);

    printf("Enter marks for English (0-100): ");
    scanf("%f", &english);


    total = math + science + english;
    average = total / 3.0;


    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }


    printf("\n--- Results ---\n");
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);


    if (math >= 40 && science >= 40 && english >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}

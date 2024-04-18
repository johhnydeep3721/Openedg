#include <stdio.h>
#include <string.h>

 // Maximum number of students

struct student {
    char name[12];
    int score;
};

void add_student(){}




int main() {
    struct student students[100]; // Array of structures
    int num_students = 0; // Variable to keep track of the number of students
    char choice;
    do {
        printf("Enter name of student: ");
        scanf("%s", students[num_students].name);

        printf("Enter score of student: ");
        scanf("%d", &students[num_students].score);

        num_students++;

        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character

    } while (choice == 'y' && num_students < 100);

    printf("\nList of students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Name: %s, Score: %d\n", students[i].name, students[i].score);
    }

    return 0;
}
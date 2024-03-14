#include <stdio.h>
int main()
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
	
	float avg1 = (studentAYear1 + studentAYear2 + studentAYear3)/3;
    float avg2 = (studentBYear1 + studentBYear2 + studentBYear3)/3;
    float avg3 = (studentCYear1 + studentCYear2 + studentCYear3)/3;
	/* your code */

    printf("Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg ");
    printf("\nStudentA      '%.2f'     '%.2f'     '%.2f'     '%.2f'",studentAYear1,studentAYear2, studentAYear3,avg1);
    printf("\nStudentA      '%.2f'     '%.2f'     '%.2f'     '%.2f'",studentBYear1,studentBYear2, studentBYear3,avg2);
    printf("\nStudentA      '%.2f'     '%.2f'     '%.2f'     '%.2f'",studentCYear1,studentCYear2, studentCYear3,avg3);

	return 0;

}
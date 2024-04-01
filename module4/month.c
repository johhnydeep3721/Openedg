#include <stdio.h>


void calendar(int month){
    int zero = 0, Jan = 31, Feb = 29, Mar = 31, April = 30, May = 31, June =30, July = 31, Augt =31, Sept = 30, Oct =31, Nov = 30, Dec = 31; 
    
    int bef_two = Jan;
    int bef_three = Jan + Feb;
    int bef_four = Jan + Feb + Mar;
    int bef_five = Jan + Feb + Mar + April;
    int bef_six = Jan + Feb + Mar + April + May;
    int bef_seven = Jan + Feb + Mar + April + May + June;
    int bef_eight = Jan + Feb + Mar + April + May + June + July;
    int bef_nine = Jan + Feb + Mar + April + May + June + July + Augt;
    int bef_ten = Jan + Feb + Mar + April + May + June + July + Augt + Sept;
    int bef_eleven = Jan + Feb + Mar + April + May + June + July + Augt + Sept + Oct;
    int bef_twelve = Jan + Feb + Mar + April + May + June + July + Augt + Sept + Oct + Nov;
    
   
    
    
    switch (month){
        case 1:
        printf("There are  %d days before the given month.",zero);
        break;
        case 2:
        printf("There are  %d days before the given month.",bef_two);
        break;
        case 3:
        printf("There are  %d days before the given month.",bef_three);
        break;
        case 4:
        printf("There are  %d days before the given month.",bef_four);
        break;
        case 5:
        printf("There are  %d days before the given month.",bef_five);
        break;
        case 6:
        printf("There are  %d days before the given month.",bef_six);
        break;
        case 7:
        printf("There are  %d days before the given month.",bef_seven);
        break;
        case 8:
        printf("There are  %d days before the given month.",bef_eight);
        break;
        case 9:
        printf("There are  %d days before the given month.",bef_nine);
        break;
        case 10:
        printf("There are  %d days before the given month.",bef_ten);
        break;
        case 11:
        printf("There are  %d days before the given month.",bef_eleven);
        break;
        case 12:
        printf("There are  %d days before the given month.",bef_twelve);
        break;
        default:
        printf("Error: no such month in my calendar.");
    }
    
}
int main()
{
    int month;
    printf("input months: ");
    scanf("%d",&month);
    calendar(month);
	/* your code */
	return 0;
}
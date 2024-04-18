#include <stdio.h>

int main(){
    float temp[31][24];
          int day;
          float sum = 0.0, average;

          for(day = 0; day < 31; day++)
              sum += temp[day][11];
          average = sum / 31;
          printf("Average temperature at noon: %f", average);
}
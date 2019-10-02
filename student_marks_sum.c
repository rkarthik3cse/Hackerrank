#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int i = 0, result = 0;
  
  if((number_of_students % 2) == 0) {
      if(gender == 'b') {
        for (int student = 0; student <= number_of_students - 2; student += 2) {
            result += *(marks + student);
        }
      } else {
           for (int student = 1; student <= number_of_students - 1; student += 2) {
                result += *(marks + student);
           }
       }
  } else {
        if(gender == 'b') {
            for (int student = 0; student <= number_of_students - 1; student += 2) {
                result += *(marks + student);
            }
      } else {
           for (int student = 1; student <= number_of_students - 2; student += 2) {
                result += *(marks + student);
       }
    }
  }

  return result;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

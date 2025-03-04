#include <stdio.h>

#include "Student.h"

int main(void) {

Student_t student = {"Egy Ketto","ASD","Vasarhely",2005,8,11,7,1};
readStudentDetails(&student);
displayStudentDetails(&student);

    return 0;
}

#include <stdio.h>

#include "Student.h"

int main(void) {
int n;
    Student_t *t;
    readAllStudentsDetails(&t,&n,"Be.txt");
printAllStudents(t,n,"Ki.txt");

    return 0;
}

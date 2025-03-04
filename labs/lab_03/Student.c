//
// Created by Balazs Tamas on 2025. 03. 04..
//
#include <stdio.h>
#include "Student.h"

void readStudentDetails(Student_t *p_student) {
    scanf("&[^/n]\n", p_student->name);
    scanf("&[^/n]\n", p_student->Neptun);
    scanf("&[^/n]\n", p_student->Birthplace);
    scanf("%d%d%d\n",&p_student->dateofBirth.year,&p_student->dateofBirth.month,&p_student->dateofBirth.day);
    scanf("%i\n", &p_student->gender);
    scanf("%f\n", &p_student->examresults);
}

void displayStudentDetails(Student_t *p_student) {
    printf("Name: %s\n", p_student->name);
    printf("Neptun: %s\n", p_student->Neptun);
    printf("Birthplace: %s\n", p_student->Birthplace);
    printf("Date of Birth: %d.%d.%d.\n", p_student->dateofBirth.year,p_student->dateofBirth.month,p_student->dateofBirth.day);
    printf("%i\n", p_student->gender);
    printf("%.2f\n", p_student->examresults);
}
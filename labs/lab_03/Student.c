//
// Created by Balazs Tamas on 2025. 03. 04..
//
#include <stdio.h>
#include "Student.h"

#include <stdlib.h>

void readStudentDetails(Student_t *p_student) {
    scanf("%[^\n]\n", p_student->name);
    scanf("%s\n", p_student->Neptun);
    scanf("%[^\n]\n", p_student->Birthplace);
    scanf("%d%d%d\n",&p_student->dateofBirth.year,&p_student->dateofBirth.month,&p_student->dateofBirth.day);
    scanf("%i\n", &p_student->gender);
    scanf("%f\n", &p_student->examresults);
}

char* getGender(enum Gender gender) {
    switch (gender) {
        case 0: return "Male" ;
        case 1: return "Female" ;
    }
    return  "Error";
}

void printStudent(Student_t p_student) {
    printf("Name: %s\n", p_student.name);
    printf("Neptun: %s\n", p_student.Neptun);
    printf("Birthplace: %s\n", p_student.Birthplace);
    printf("Date of Birth: %d.%d.%d.\n", p_student.dateofBirth.year,p_student.dateofBirth.month,p_student.dateofBirth.day);
    printf("Gender %s\n", getGender(p_student.gender));
    printf("%.2f\n", p_student.examresults);
}

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents =(Student_t*) malloc(numberOfStudents * sizeof(Student_t));
    if (!(*dpStudents)) {printf("Error"); exit(1);}
}

void readAllStudentsDetails(Student_t **dpStudents, int*numberOfStudents, const char *input) {
    if (!(freopen(input, "r", stdin))) {printf("Error"); exit(1);}
    scanf("%i\n",numberOfStudents);

    allocateMemoryForStudents(dpStudents, *numberOfStudents);
    for (int i = 0; i < *numberOfStudents; i++) {
        readStudentDetails(&(*dpStudents)[i]);
    }
    freopen("CON","r",stdin);
}

void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination) {
    if (!freopen(destination,"w",stdout)){printf("Error"); exit(1);}
    for (int i = 0; i < numberOfStudents; i++) {
        printStudent(pStudents[i]);
        printf("\n");
    }
}
void calculatePercentageBoysGirls (Student_t **dpStudents, int numberOfStudents) {
    int lany=0,fiu=0;
    for (int i = 0; i < numberOfStudents; i++) {

    }
}

void deallocate(Student_t **pStudent) {
    free(*pStudent);
    *pStudent = NULL;
}
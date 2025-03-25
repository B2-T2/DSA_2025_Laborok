//
// Created by Balazs Tamas on 2025. 03. 04..
//

#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int year,month,day;
}Date_t;

enum Gender {male,female};

typedef struct {
    char name[51];
    char Neptun[9];
    char Birthplace[25];
    Date_t dateofBirth;
    enum Gender gender;
    float examresults;
}Student_t;

void readStudentDetails(Student_t *p_student);
char* getGender(enum Gender gender);

/**
* Reads all details of a student, student must be passed by reference
* @param pStudent - pointer to a student
*/
void readStudentDetails(Student_t *pStudent);
/**
* Prints all details of a student
* @param student
*/
void printStudent(Student_t student);
/**
* Allocates memory for an array of Student_t types, array must be
passed by reference
* @param dpStudents - double pointer to a Student_t type
* @param numberOfStudents
*/
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
/**
* Reads all students' data from an input
* This function should call first the @allocateMemoryForStudents
function
* @param dpStudents - double pointer to a Student_t type
* @param numberOfStudents
* @param input CON or input file name
*/
void readAllStudentsDetails(Student_t **dpStudents, int*numberOfStudents, const char *input);
/**
* Prints all students to a given destination
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
* @param destination CON or output file name
*/
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);
/**
* Calculates and prints the percentage of boys and girls.
* @param dpStudents Double pointer to an array of Student structures
(Student**).
* @param numberOfStudents total number of students in the array.
*/
void calculatePercentageBoysGirls (Student_t **dpStudents, int numberOfStudents);
/**
*Deallocates the memory allocated for a Student_t structure.
* @param pStudent A pointer to a Student_t pointer
*/
void deallocate(Student_t **pStudent);


#endif //STUDENT_H

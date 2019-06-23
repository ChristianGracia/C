#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(void)
{
    
 //allocating space for students
 int enrollment = get_int("Enrollment: ");

 student students[enrollment];

 //prompt user to input students' name and dorm
 for (int i = 0; i < enrollment; i++)
 {
    students[i].name = get_string("Name: ");
    students[i].dorm = get_string("Dorm: ");
 }
 //save students to disk
 FILE *file = fopen("students.csv", "w");

 if (file)
 {
     for (int i = 0; i < enrollment; i++)
     {
        fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
     }
     fclose(file);
 };
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "../../files_h/computeAverage.h"
void avarage(sScore*);
void toLowerString(char str[]);

int main()
{
sScore student[5];
int count_student=0;
    for(int i=0;i<5;i++) student[i].avarage=0;

    for(int i=0;true;i++)
    {
        printf("\nEnter student name: ");
        scanf("%s",student[i].name);
        toLowerString(student[i].name);
            if(strcmp(student[i].name,"end") == 0) 
                {
                    float res;
                    for(int i=0;i<5;i++) res+=student[i].avarage;
                    printf("average(): %f",res/count_student);
                    break;
                }    
        printf("\nEnter quiz score: ");
        scanf("%f",&student[i].quizScore);
        printf("\nEnter exam score: ");
        scanf("%f",&student[i].examScore);
        avarage(&student[i]);
        toupper(student[i].name[0]);
        printf("\nStudent %s average = %f",student[i].name,student[i].avarage);
        count_student++;
    }


return 0;    
}

void avarage(sScore *student)
{
student->avarage = (student->examScore + student->quizScore)/2;
}

void toLowerString(char str[])
{
    for(int i=0;str[i];i++)
        str[i]=tolower(str[i]);
}
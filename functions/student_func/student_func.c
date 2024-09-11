#include <stdio.h>
#define snum 3
#define name_len 20
typedef struct{
    char name[name_len];
    int roll_num;
    float marks[snum]; 
    float avarage_marks;        // arabic => 80, english=> 60, frensh=> 40
}student;

void inputStudentData(student *student);
void displayStudentData(const student *student);
void displayTopStudent(student students[],int num_students);

int main() {
student ibrahim={'I','b','r','a','h','i','m','\0'};
// char hema[]="hema";
// printf("%s\n",hema);
    ibrahim.roll_num=1;
    ibrahim.marks[0]=70;
    ibrahim.marks[1]=53.5;
    ibrahim.marks[2]=39;
student ali={'A','l','i','\0'};
    ali.roll_num=2;
    ali.marks[0]=59;
    ali.marks[1]=45;
    ali.marks[2]=35;
student farah={'F','a','r','a','h'};
    farah.roll_num=3;
    farah.marks[0]=75;
    farah.marks[1]=57;
    farah.marks[2]=39;
student students[snum]={ibrahim,ali,farah};
displayStudentData(&ibrahim);
displayStudentData(&ali);    
displayStudentData(&farah);
displayTopStudent(students,3);

    return 0;
}

void inputStudentData(student *student){
        student->avarage_marks= (student->marks[0]+student->marks[1]+student->marks[2])/snum;
}

void displayStudentData(const student *student){
    printf("Name: %s\n",&(student->name));
    printf("roll_number: %i\n",student->roll_num);
    printf("Marks:\n    arabic: %f\n    english: %f\n    frensh: %f\n",student->marks[0],student->marks[1],student->marks[2]);
    printf("avarage_marks: %f\n",student->avarage_marks);
}

void displayTopStudent(student students[],int num_students){
student temp;
    for(int i=0;i<snum;i++) inputStudentData(&students[i]);
    for(int i=0;i<snum-1;i++)
        {
            for(int j=0;j<snum-1;j++)
                {
                    if( students[j].avarage_marks<students[j+1].avarage_marks )
                        {
                            temp=students[j+1];
                            students[j+1]=students[j];
                            students[j]=temp;
                        }
                }
                    
        }
    for(int i=0;i<num_students;i++)  
        {
            displayStudentData(&students[i]);
            printf("===================================\n");
        }    
}
    
#include <stdio.h>
#include <string.h>
#include "../../files_h/MiddleAge.h"
#define pnum 3
int main()
{
person obj[3];
person midBody;    
readData(obj);
midBody= findeMiddleAge(obj);
printPerson(&midBody);
return 0;
}

person findeMiddleAge(person *people){
int firAge=people[0].age,secAge=people[1].age,thirAge=people[2].age;
    if((firAge/secAge==0 && firAge/thirAge==1) || (firAge/secAge==1 && firAge/thirAge==0)) return people[0];
    else if((secAge/firAge==0 && secAge/thirAge==1) || (secAge/firAge==1 && secAge/thirAge==0)) return people[1];    
    else return people[2];
}

void readData(person *people){
    for(int i=0;i<pnum;i++)
    {
        printf("\nEnter name and age of person %i: ",i+1);
        // printf("the problem not here");
        scanf("%s%i",people[i].name,&people[i].age);
    }
}
void printPerson(person *body){
    printf("Name: %s\nMiddle Age: %i\n",body->name,body->age);
}

#include <stdio.h>
#include <stdbool.h>
#include "../../files_h/vacation.h"


int main(){
    app employee_list[5];
    int n,choice;
    printf("select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: printList()\n");
	printf("3: mayTakeLeave()\n");
	printf("4: exit()\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%i",&choice);
        switch (choice)
        {
        case 1:
            getInput(employee_list,&n);
            break;
        
        case 2:
            printList(employee_list,&n);
            break;
        case 3:
            canTake(employee_list,&n);
            break;    
        }
    } while (choice<4);
return 0;   
}

void getInput(app *emp,int *n){
    printf("Enter the number of stuff records: ");
    scanf("%i",n);    
    for(int i=0;i < *n;i++)
    {
        printf("\nEnter ID, total leave, leave taken: ");
        scanf("%i%i%i",&emp[i].Id, &emp[i].totalLeave, &emp[i].leaveTaken);
    }
}

void canTake(app *emp,int *n){
    int ID,wantedLeave,empIndex;
    bool founded=false;
    printf("please Enter your ID, leave wanted leave: ");
    scanf("%i%i",&ID,&wantedLeave);
    for(int i=0;!founded&&i<*n;i++)
        {
            if(emp[i].Id==ID) founded=true;
            empIndex=i;
        }    
    switch (founded)
    {
    case 0:
        printf("The staff %i is not in the list",ID);
        break;
    
    case 1:
        if((wantedLeave+emp[empIndex].leaveTaken)<emp[empIndex].totalLeave)
            printf("The staff %i can take leave\n",ID);
        else 
            printf("The staff %i can not take leave\n",ID);
        break;
    }
}

void printList(app *emp,int *n){
    for(int i=0;i<*n;i++)
        printf("ID: %i, total leave: %i, leave taken: %i\n",emp[i].Id,emp[i].totalLeave,emp[i].leaveTaken);        

}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "../../files_h/customer.h"

bool get_customer_data(account *cust);
void print_customer_data(account *cust);
void tolowerString(char *string);

int main() {
account record;
bool go;
    while(true)
        {
            go=get_customer_data(&record);
            if(!go) break;
            print_customer_data(&record);
        }
    
return 0;    
}

bool get_customer_data(account *cust) {
    printf("\nEnter your name (first last) : ");
    scanf("%s%s",cust->names.firsName,cust->names.lastName);
    // check if the name is end customer
    tolowerString(cust->names.firsName);
    tolowerString(cust->names.lastName);
    // printf("%s %s",cust->names.firsName,cust->names.lastName);
        if(strcmp(cust->names.firsName,"end")==0 && strcmp(cust->names.lastName,"customer")==0) return false;
    cust->names.firsName[0]=toupper(cust->names.firsName[0]);
    cust->names.lastName[0]=toupper(cust->names.lastName[0]);
    printf("\nEnter account number: ");
    scanf("%i",&cust->accNum);
    printf("\nEnter the balance: ");
    scanf("%f",&cust->balance);
    return true;
}
void print_customer_data(account *cust) {
    printf("\nCustomer Record: \n");
    printf("\tName: %s %s\n",cust->names.firsName,cust->names.lastName);
    printf("\tAccount Number: %i\n",cust->accNum);
    printf("\tThe Balance: %f\n",cust->balance);
}

void tolowerString(char *string) {
    for(int i=0;string[i];i++)
        {
            string[i]=tolower(string[i]);
            // printf("%c",string[i]);
        }
}
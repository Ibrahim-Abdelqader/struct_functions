#include <stdio.h>
#include <math.h>
#include "../../files_h/calculator.h"

float compute_by_value(calc obj);
float compute_by_address(calc *obj);
int main()
{
calc e;
short choice;
    printf("select one of the following options: \n");
    printf("1: compute_by_value()\n");
    printf("2: compute_by_address()\n");
    printf("3: exit()\n");
    do{
        printf("Enter your choice: ");
        scanf("%hi",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter expression (op1,op2,op)");
            scanf("%f %f %c",&e.operand1,&e.operand2,&e.op);
            printf("compute_by_value(): %f\n",compute_by_value(e));  // I don'n know what is %.2f           
            break;
        case 2:
             printf("Enter expression (op1,op2,op)");
            scanf("%f %f %c",&e.operand1,&e.operand2,&e.op);
            printf("compute_by_address(): %f\n",compute_by_address(&e));  // I don'n know what is %.2f 
            break;
        }
    }while (choice<3);
return 0;    
}

float compute_by_value(calc obj)
{
float res;
    switch (obj.op)
    {
    case '+':
        res=obj.operand1 + obj.operand2;
        return res;
    case '-':
         res=obj.operand1 - obj.operand2;
        return res;
    case '*':
         res=obj.operand1 * obj.operand2;
        return res;
    case '/':
         res=obj.operand1 / obj.operand2;
        return res;      
    default:
        printf("invalid operator");
        break;
    }
}

float compute_by_address(calc *obj)
{
float res;
    switch (obj->op)
    {
    case '+':
        res=obj->operand1 + obj->operand2;
        return res;
    case '-':
         res=obj->operand1 - obj->operand2;
        return res;
    case '*':
         res=obj->operand1 * obj->operand2;
        return res;
    case '/':
         res=obj->operand1 / obj->operand2;
        return res;      
    default:
        printf("invalid operator");
        break;
    }
}
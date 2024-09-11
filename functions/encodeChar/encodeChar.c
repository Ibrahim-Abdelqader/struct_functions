#include <stdio.h>
#include <string.h>
#define codechar 5
typedef struct{
    char source;
    char code;        
}Rule; 
void encodeString(Rule table[],char string[]);
int main() {
char s[50];
Rule table[codechar]={{'a','d'},{'b','z'},{'z','a'},{'d','b'}};
printf("Enter string: ");
scanf("%s",s);
encodeString(table,s);
printf("encoded string: %s",s);
return 0;    
}

void encodeString(Rule table[],char string[]) {
int counter=0;
    for(int i=0;string[i];i++)
            for(int j=0;j<codechar;j++)
                    if(string[i]==table[j].source) 
                        {
                            string[i]=table[j].code;
                            break;
                        }                    
}               
#include <stdio.h>
#include <stdbool.h>
#include "../../files_h/circle.h"
#include <math.h>

bool contain(circle *c1,circle *c2);

int main()
{
circle fir_c={10,5,5};
circle sec_c={1,1,1};
bool res=contain(&fir_c,&sec_c);
printf("%i",res);

return 0;
}

bool contain(circle *c1,circle *c2)
{
float s_dif=(c1->x - c2->x)*(c1->x - c2->x) + (c1->y - c2->y)*(c1->y - c2->y);    
float distanc=sqrt(s_dif);
if(c1->radius >= (c2->radius + distanc)) return true;
return false;
}
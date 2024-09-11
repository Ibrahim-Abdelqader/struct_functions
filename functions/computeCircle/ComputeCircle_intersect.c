#include <stdio.h>
#include <stdbool.h>
#include "../../files_h/circle.h"
#include <math.h>
bool intersect(circle c1,circle c2);

int main(){
circle fir_c={1,5,5};
circle sec_c={1,10,10};

bool result=intersect(fir_c,sec_c);    
printf("%i",result);

return 0;    
}
bool intersect(circle c1,circle c2)
{
float s_dif=(c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y);    
float distanc=sqrt(s_dif);    
    if( distanc <= (c1.radius+c2.radius)) return true;
    return false;
}
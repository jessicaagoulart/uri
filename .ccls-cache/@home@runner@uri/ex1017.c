#include <stdio.h>
 
int ex1017() {
 
 int d, v, t;
 float l;
 
    scanf("%d", &t); 
    
    scanf("%d", &v); 

    d = v * t;

    l = d / 12.0;
    
    printf("%0.3f\n", l);
 
    return 0;
}
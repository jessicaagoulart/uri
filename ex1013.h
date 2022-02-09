#include <stdio.h>
#include <stdlib.h>
 
int ex1013() {
 
 int a, b, c, x, y;
 
    scanf("%d", &a); 
    
    scanf("%d", &b); 

    scanf("%d", &c);

    x = (a + b + abs(a-b)) / 2;

    y = ( x + c + abs(x - c)) /2;
    
    printf("%d eh o maior\n", y);
 
    return 0;
}
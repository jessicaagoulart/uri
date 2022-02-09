#include <stdio.h>
 
int ex1113() {
 
   int x, y;
   
    scanf("%d", &x);
    scanf("%d", &y);
    
    while (x!=y) {
           if(x>y) {
               printf("Decrescente\n");
           }
           else {
               printf("Crescente\n");
           }
           scanf("%d", &x);
           scanf("%d", &y);
    }
    
    return 0;
}
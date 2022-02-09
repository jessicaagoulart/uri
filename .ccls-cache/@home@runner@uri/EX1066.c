#include <stdio.h>
 
int ex1066() {
 
    int x, i, par, impar, pos, neg;
    
    par = 0; 
    impar = 0;
    pos = 0;
    neg = 0;
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &x);
        
        if (x%2 == 0){
            par += 1;
        }
        
        if (x%2 != 0){
            impar += 1;
        }
        
        if (x > 0){
            pos += 1;
        }
        
        if (x < 0){
            neg += 1;
        }
    }
    
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
}
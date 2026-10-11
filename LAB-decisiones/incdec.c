#include <stdio.h>
int main (void) {
    int i, j;

    i = 5;
    j = i++;
    printf("j = %i, i = %i\n", j, i);

    i = 5;
    j = ++i;
    printf("j = %i, i = %i\n", j, i);

    int k = i++ + i++;
    printf("Comportamiento no especificado: %i", k); // Warn :
    /*                                                                            
    incdec.c:13:20: warning: operation on 'i' may be undefined [-Wsequence-point]                                               
   13 |     int k = i++ + i++;                                                                                              
      |                   ~^~                   
    */

    return 0;
}
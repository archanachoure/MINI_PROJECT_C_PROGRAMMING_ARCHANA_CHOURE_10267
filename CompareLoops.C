#include <stdio.h>

int main() {
    
    int limit = 10;
    int forCount = 0;
    int whileCount = 0;
    int i;   

    for (i = 1; i <= limit; i++) {
        forCount++;
    }

    
    i = 1;
    while (i <= limit) {
        whileCount++;
        i++;
    }
    printf("Loop Optimization Demo\n");
    printf("----------------------\n");
    printf("For Loop Iterations   : %d\n", forCount);
    printf("While Loop Iterations : %d\n", whileCount);

    return 0;
}
// NAME - ARCHANA CHOURE 
//  ERP - 10267 
//      Loop Optimization Demo
// ----------------------
// For Loop Iterations   : 10
// While Loop Iterations : 10

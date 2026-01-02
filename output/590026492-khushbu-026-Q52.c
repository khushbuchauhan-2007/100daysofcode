#include <stdio.h>

int main() {
    int i, j;
    int groupSizes[] = {1, 3, 5, 3, 1}; 

    for(i = 0; i < 5; i++) {   
        
        for(j = 1; j <= groupSizes[i]; j++) {
            printf("*\n");
        }

    
        if(i != 4) {
            printf("\n");
        }
    }

    return 0;
}

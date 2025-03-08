#include <stdio.h>

int main(){
    int i = 0,j = 0;
    while (i < 5){
        while (j <= i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

// output: *
//         * *
//         * * *
//         * * * *
//         * * * * * 

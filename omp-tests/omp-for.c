#include <stdio.h>

int main() {
    int i;

#pragma omp parallel for
    for(i = 0; i < 20; i++) 
    {
        printf("Hello World %d\n", i);
    }
    return 0;
}
#include<stdio.h>

#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
int array[] = {23,34,12,17,204,99,16};

int main()
{
    int d;

    printf("Size of array %d\n", TOTAL_ELEMENTS);
    d = -1;
    printf("value of %d\n", d <= (TOTAL_ELEMENTS-2));
    for(d=-1;d <= (TOTAL_ELEMENTS-2);d++){
        printf("value of %d\n",d);
        printf("%d\n",array[d+1]);
    }
        
    return 0;
}
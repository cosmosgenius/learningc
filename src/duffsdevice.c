#include <stdio.h>
#include <stdlib.h>

/*This is the crazyest optimization ever using loop unrolling*/

void duff(register char *to, register char *from, register int count)
{
    register int n=(count+7)/8;
    switch(count%8){
        case 0: do{ *to++ = *from++;
        case 7:  *to++ = *from++;
        case 6: *to++ = *from++;
        case 5: *to++ = *from++;
        case 4: *to++ = *from++;
        case 3: *to++ = *from++;
        case 2: *to++ = *from++;
        case 1: *to++ = *from++;           
                }while( --n >0);
    }
}

int main()
{
        char input[] = "sharatmrarun";
        char output[] = "hello how do u do";
        int count;
        /*printf("Enter the string\n");
        scanf("%s",input);

        printf("Enter the count\n");
        scanf("%d",&count);*/
        
        printf("input is %s\n", input);
        duff(input, output, 10);

        printf("Output is %s\n", input);
        return 0;
}
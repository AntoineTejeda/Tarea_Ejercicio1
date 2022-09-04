#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hours, Minutes;
    printf("enter the time in 24 hour format:\n");
    scanf("%d",&Hours);//hours=0
    if(Hours<=24 && Hours>=0)
    {
        printf("Give me the minutes please:\n");
        scanf("%d",&Minutes);//minutes=10
        if(Hours>=0 && Hours<12)
        {
            printf("Good Morning \n");
        }
        if(Hours>=12 && Hours<18)
        {
            printf("Good eveninig \n");
        }
        if(Hours>=18 && Hours<25)
        {
            printf("Good Nigth \n");
        }
    }else{
        printf("the time format is not valid\n");
    }

    return 0;
}

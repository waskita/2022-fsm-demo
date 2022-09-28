#include <stdio.h>
#include <stdlib.h>
#include "../fsm/fsm.h"

// simulasi lampu kedip
int main()
{
    int input;
    int output;
    int state;
    int i;

state=STATE_OFF;
          for(i=0; i<20; i++)
    {
        if(i<10)
        {
            input=0;
        }
        else
        {
            input=1;
        }
        fsm(&state,input,&output);

        printf("%4d %4d %4d %4d\n",i,state,input,output);
    }


    printf("Hello world!\n");

    return 0;
}

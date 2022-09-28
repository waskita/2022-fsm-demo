#include <stdio.h>
#include <stdlib.h>
#include "../fsm/fsm.h"

int main()
{

    int input;
    int output;
    int state;

    input=0;
    state=STATE_OFF;
    fsm(&state,input,&output);
    if(state==STATE_OFF)
    {
        printf("ok %d\n",__LINE__)    ;
    }
    else
    {
        printf("fail %d\n",__LINE__)    ;
    }


    input=1;
    state=STATE_OFF;
    fsm(&state,input,&output);
    if(state==STATE_ON)
    {
        printf("ok %d\n",__LINE__)    ;
    }
    else
    {
        printf("fail %d\n",__LINE__)    ;
    }

    input=0;
    state=STATE_ON;
    fsm(&state,input,&output);
    if(state==STATE_ON)
    {
        printf("ok %d\n",__LINE__)    ;
    }
    else
    {
        printf("fail %d\n",__LINE__)    ;
    }


    input=1;
    state=STATE_ON;
    fsm(&state,input,&output);
    if(state==STATE_OFF)
    {
        printf("ok %d\n",__LINE__)    ;
    }
    else
    {
        printf("fail %d\n",__LINE__)    ;
    }


    return 0;
}

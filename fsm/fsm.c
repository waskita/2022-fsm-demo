#include "fsm.h"

void fsm(int *state, int input, int *output)
{
    switch (*state)
    {
    case STATE_OFF:
    {
        if(input==0)
        {
// state tetap
        }
        else if(input==1)
        {
            *state=STATE_ON;
        }
        break;
    }
    case STATE_ON:
    {
        if(input==0)
        {
// state tetap
        }
        else if(input==1)
        {
            *state=STATE_OFF;
        }
        break;
    }

    default:
    {
        break;

    }

    }
}

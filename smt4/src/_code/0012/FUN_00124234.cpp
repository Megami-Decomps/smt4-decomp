#include "common.h"

extern "C" {

int soundPlaySePanned(int arg0, u32 arg1);

/* Forwards to soundPlaySePanned, the function that follows it. */
int FUN_00124234(int arg0, u32 arg1)
{
    return soundPlaySePanned(arg0, arg1);
}

} /* extern "C" */

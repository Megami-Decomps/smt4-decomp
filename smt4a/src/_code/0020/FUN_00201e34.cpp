#include "common.h"

extern "C" {

int soundPlayAtPosition(int arg0, u32 arg1);

/* Forwards to soundPlayAtPosition, the function that follows it. */
int FUN_00201e34(int arg0, u32 arg1)
{
    return soundPlayAtPosition(arg0, arg1);
}

} /* extern "C" */

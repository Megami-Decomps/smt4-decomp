#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
void asdSequenceRequest(u32 state, const void *argument, u32 size);
u32 FUN_00330814(void)
{
    u32 argument = 0;
    asdSequenceRequest(19, &argument, 4);
    return 1;
}
}

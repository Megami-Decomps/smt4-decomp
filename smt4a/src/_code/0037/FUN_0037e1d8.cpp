#include "common.h"


extern "C" {
/* Reads or updates the requested object state. */
u32 scrGetArg(u32 index);
void asdSequenceRequest(u32 state, const void *argument, u32 size);
u32 FUN_0037e1d8(void)
{
    u32 argument = scrGetArg(0);
    asdSequenceRequest(13, &argument, 4);
    return 1;
}
}

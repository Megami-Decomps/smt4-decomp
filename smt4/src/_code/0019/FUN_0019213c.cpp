#include "common.h"

extern "C" {

extern void asdSequenceRequest(u32 state, const void *argument, u32 size);

/* Requests sequence state twenty-three with a clear one-byte argument. */
void FUN_0019213c(void)
{
    u8 argument = 0;
    asdSequenceRequest(23, &argument, sizeof(argument));
}

} /* extern "C" */

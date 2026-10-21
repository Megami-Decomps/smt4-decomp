#include "common.h"

extern "C" {
void asdSequenceRequest(s32 state, const void *arg, u32 size);

/* Requests the initial sequence without an argument. */
void asdSequenceRequestInitial(void)
{
    asdSequenceRequest(1, NULL, 0);
}
}

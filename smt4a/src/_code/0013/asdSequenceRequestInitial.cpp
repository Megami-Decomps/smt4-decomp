/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void asdSequenceRequest(s32 state, const void *arg, u32 size);

void asdSequenceRequestInitial(void)
{
    asdSequenceRequest(1, 0, 0);
}

}

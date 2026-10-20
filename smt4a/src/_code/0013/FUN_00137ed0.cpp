/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void asdSequenceRequest(s32 state, const void *arg, u32 size);

void FUN_00137ed0(void)
{
    asdSequenceRequest(1, 0, 0);
}

}

/* NON_MATCHING: retail uses ARM5TE Thumb moves and schedules the prologue after the argument move. */
#include "common.h"

extern "C" void emptyStub_002e6da8(s32 mode, s32 value);

/* Supply the argument pair expected by the optional callback. */
extern "C" void FUN_00103260(s32 value)
{
    emptyStub_002e6da8(12, value);
}

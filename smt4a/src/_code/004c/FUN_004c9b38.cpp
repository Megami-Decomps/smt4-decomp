#include "common.h"
struct Status { u8 unk00[80]; u32 flags; u32 unk54; u32 extraFlags; };

/* Tests whether the combined state is blocked. */
extern "C" int FUN_004c9b38(Status *status)
{
    if ((status->flags & 1) == 0 || (status->flags & 128) == 0 || (status->flags & 2) != 0) {
        return 1;
    }
    if (status->extraFlags & 4) {
        return 1;
    }
    return 0;
}

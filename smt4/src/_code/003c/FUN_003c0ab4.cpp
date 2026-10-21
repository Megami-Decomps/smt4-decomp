/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"
struct StatusWords {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 state;
    /* 0x54 */ u32 flags;
};
/* Tests completion unless the state bits already force completion. */
extern "C" s32 FUN_003c0ab4(const StatusWords *status)
{
    if ((status->state & 1) && (status->state & 128) && !(status->state & 2))
        return (status->flags & 4) != 0;
    return 1;
}

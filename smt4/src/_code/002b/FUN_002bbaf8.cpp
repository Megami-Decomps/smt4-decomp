/* NON_MATCHING: armcc does not if-convert the fault call (retail: ldreq key; moveq r1, pc; bleq) and keeps the object address in r4 across it, where retail reloads the pool word after the call; retail also loads the ready word before the push */
/* Returns the lazily initialised value, reporting a fault (key and the address of the check) when it is not ready yet. */
#include "common.h"

extern "C" {
struct LazyValue {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 value;
};

extern LazyValue g_fsArchiveHandleWords; /* the ready word and the value */
void FUN_002bbb2c(u32 key, u32 address);

s32 FUN_002bbaf8(void)
{
    if (g_fsArchiveHandleWords.unk00 == 0) {
        FUN_002bbb2c(0xE0A046DB, __current_pc());
    }
    return g_fsArchiveHandleWords.value;
}
}

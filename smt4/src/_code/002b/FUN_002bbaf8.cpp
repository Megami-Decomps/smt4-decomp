/* NON_MATCHING: armcc does not if-convert the fault call (retail: ldreq key; moveq r1, pc; bleq) and shares the literal for the ready word and the value; retail loads the ready word before the push */
/* Returns the lazily initialised value, reporting a fault (key and the address of the check) when it is not ready yet. */
#include "common.h"

extern "C" {
struct LazyValue {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 value;
};

extern s32 g_fsArchiveHandleWords;        /* the ready word */
extern LazyValue DAT_0044e640;  /* the same words seen as a record */
void FUN_002bbb2c(u32 key, u32 address);

s32 FUN_002bbaf8(void)
{
    if (g_fsArchiveHandleWords == 0) {
        FUN_002bbb2c(0xE0A046DB, __current_pc());
    }
    return DAT_0044e640.value;
}
}

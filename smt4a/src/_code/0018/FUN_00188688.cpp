/* NON_MATCHING: armcc does not if-convert the fault call (retail: ldreq key; moveq r1, pc; bleq) and shares the literal for the ready word and the value; retail loads the ready word before the push */
/* Returns the lazily initialised value, reporting a fault (key and the address of the check) when it is not ready yet. */
#include "common.h"

extern "C" {
struct LazyValue {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 value;
};

extern s32 DAT_00589390;        /* the ready word */
extern LazyValue DAT_0058938c;  /* the same words seen as a record */
void FUN_0016e800(u32 key, u32 address);

s32 FUN_00188688(void)
{
    if (DAT_00589390 == 0) {
        FUN_0016e800(0xE0A046DB, __current_pc());
    }
    return DAT_0058938c.value;
}
}

#include "nn/Result.h"

extern "C" {
struct LazyValue {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 value;
};

extern s32 g_moduleValue;        /* the ready word */
extern LazyValue DAT_0058938c;  /* the same words seen as a record */
void FUN_0016e800(u32 key, u32 address);

/* Returns the lazily initialised value, reporting a fault (the not-initialised result and the address of the check) when it is not ready yet. */
s32 fsGetUserMountHandle(void)
{
    if (g_moduleValue == 0) {
        nn::Result result(0xE0A046DB);
        FUN_0016e800(result, __current_pc());
    }
    return DAT_0058938c.value;
}
}

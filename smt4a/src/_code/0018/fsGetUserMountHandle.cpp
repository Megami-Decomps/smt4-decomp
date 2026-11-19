#include "nn/Result.h"
#include "sys/PlatformFault.h"

extern "C" {
struct LazyValue {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 value;
};

extern s32 g_moduleValue;        /* the ready word */
extern LazyValue g_fsUserMount;  /* the same words seen as a record */

/* Returns the lazily initialised value, reporting a fault (the not-initialised result and the address of the check) when it is not ready yet. */
s32 fsGetUserMountHandle(void)
{
    if (g_moduleValue == 0) {
        nn::Result result(0xE0A046DB);
        sysReportCheckFailure(result, __current_pc());
    }
    return g_fsUserMount.value;
}
}

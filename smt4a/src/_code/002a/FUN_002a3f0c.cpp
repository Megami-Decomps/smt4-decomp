/* NON_MATCHING: retail emits 'push {r4, r5, r6, lr}'; compiler emits 'mov r0, #0' at the first differing instruction. */
#include "common.h"
extern "C" {
u32 scrGetArg(u32);
const char *scrGetArgString(u32);
s32 FUN_002a1738(u32,const char *);
s32 FUN_002a3f0c() {
    u32 value=scrGetArg(0);
    return FUN_002a1738(value,scrGetArgString(1))!=0;
}
}

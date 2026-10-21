/* NON_MATCHING: retail emits 'blt 30'; compiler emits 'mov r0, #0' at the first differing instruction. */
#include "common.h"
extern "C" {
const char *scrGetArgString(void);
s32 scrGetArg(u32);
s32 FUN_002bf09c(const char *);
void FUN_0021c118(u32,u32);
s32 FUN_0031c410() {
    s32 index=FUN_002bf09c(scrGetArgString());
    if(index>=0) {
        s32 value=scrGetArg(1);
        FUN_0021c118(index,value<0?0:value);
    }
    return 1;
}
}

/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
const char *scrGetArgString(void);
s32 FUN_002bf09c(const char *name);
u32 sysPlayVoice(s32 index);
void scrSetResult(u32 result);
/* Resolves the script's named record and stores its value as the result. */
s32 FUN_002c2104(void) {
    s32 index = FUN_002bf09c(scrGetArgString());
    if (index >= 0) scrSetResult(sysPlayVoice(index));
    return 1;
}
}

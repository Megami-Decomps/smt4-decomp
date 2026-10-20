#include "common.h"

extern "C" {

s32 bgmPlay(s32 id, s32 a, s32 b);
s32 FUN_002bf09c(s32 name);
s32 scrGetArg(u32 index);
s32 scrGetArgString(u32 index);

/* Script command: plays the BGM named by argument 0 with arguments 1 and 2 (clamped to 0 or more). */
u32 scrCommBgmPlay(void)
{
    s32 id = FUN_002bf09c(scrGetArgString(0));
    s32 a;
    s32 b;

    if (id < 0) {
        return 1;
    }
    a = scrGetArg(1);
    b = scrGetArg(2);
    if (a < 0) {
        a = 0;
    }
    if (b < 0) {
        b = 0;
    }
    bgmPlay(id, a, b);
    return 1;
}

} /* extern "C" */

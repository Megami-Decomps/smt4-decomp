#include "shard/Shard0032.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern s32 scrGetCommandFrame(void);
extern s32 FUN_00203d74(void);

/* Script command: 1 (done) unless argument 0 lies beyond the current count and FUN_00203d74 reports not ready. */
u32 scrCommCheckCount(s32 argIndex)
{
    s32 count = scrGetArg(argIndex);

    if (0 < count) {
        s32 current = scrGetCommandFrame();
        s32 limit = scrGetArg(0);

        if (current < limit && FUN_00203d74() == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */

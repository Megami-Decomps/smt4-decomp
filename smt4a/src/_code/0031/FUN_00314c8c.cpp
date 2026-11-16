#include "common.h"
#include "camp/Unite/UniteEffect.h"

extern "C" {
u32 FUN_00212204(s32 mode);
s32 scrGetArg(u32 index);
u32 FUN_003d54f8(s32 channel, s32 duration);
s32 FUN_00162ea4(void);
s32 FUN_00203d74(void);
s32 scrGetCommandFrame(void);

// Start the requested channel transition on entry and wait for it to become idle.
u32 FUN_00314c8c(void)
{
    s32 duration = scrGetArg(1);
    if (FUN_00203d74() != 0 && duration > 4) {
        duration = 4;
    }
    if (scrGetCommandFrame() == 0) {
        s32 channel = scrGetArg(0);
        if (channel != 0 && channel != 1) {
            return 1;
        }
        FUN_003d54f8(0, duration);
    } else {
        if (FUN_00163e84(0) != 0) {
            return 1;
        }
        if (FUN_00162ea4() != 0) {
            FUN_00212204(0);
        }
    }
    return 0;
}
}

/* NON_MATCHING: block layout: retail places the shared `return 1` and the command-frame-zero arm between the two frameTextureGetState arms of the other branch; swapping the if/else order does not reproduce it. */
#include "common.h"
#include "camp/Unite/UniteEffect.h"
#include "code/Code0020.h"
extern "C" {
s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 frameTextureGetState(void);
void slotSetRequest(u32 screen, s32 duration, u32 color);
s32 FUN_00162ea4(void);
void FUN_0022677c(u32 screen, u32 color);

u32 FUN_00314d18(void)
{
    s32 duration = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        if (FUN_00203d74() && duration > 4)
            duration = 4;
        s32 colorMode = scrGetArg(0);
        switch (colorMode) {
        case 0:
            if (!frameTextureGetState())
                slotSetRequest(0, duration, 0xFF);
            slotSetRequest(1, duration, 0xFF);
            break;
        case 1:
            if (!frameTextureGetState())
                slotSetRequest(0, duration, 0xFFFFFFFF);
            slotSetRequest(1, duration, 0xFFFFFFFF);
            break;
        default:
            return 1;
        }
    } else {
        if (frameTextureGetState()) {
            if (FUN_00163e84(1))
                return 1;
        } else {
            if (FUN_00163e84(0) && FUN_00163e84(1))
                return 1;
        }
        if (FUN_00162ea4()) {
            s32 colorMode = scrGetArg(0);
            switch (colorMode) {
            case 0:
                if (!frameTextureGetState())
                    FUN_0022677c(0, 0xFF);
                FUN_0022677c(1, 0xFF);
                break;
            case 1:
                if (!frameTextureGetState())
                    FUN_0022677c(0, 0xFFFFFFFF);
                FUN_0022677c(1, 0xFFFFFFFF);
                break;
            }
        }
    }
    return 0;
}
}

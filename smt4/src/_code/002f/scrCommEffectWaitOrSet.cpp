#include "common.h"

struct EffectCommandState {
    u8 unk0000[0x3028]; // 0x0000
    u32 flags;           // 0x3028
};

extern "C" {
extern EffectCommandState* DAT_00435d18;
u32 scrGetArg(u32 index);
s32 FUN_003da5b4(EffectCommandState* state);
void btlActionControllerStartSequence(EffectCommandState* state, s32 first, u32 second);

// Wait for the flagged effect operation, or submit the script's two values.
u32 scrCommEffectWaitOrSet(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    if ((DAT_00435d18->flags & 0x4000) != 0) {
        if (FUN_003da5b4(DAT_00435d18) != 0) {
            return 1;
        }
    } else {
        btlActionControllerStartSequence(DAT_00435d18, (s16)first, (u16)second);
    }
    return 0;
}
}

/* NON_MATCHING: retail keeps a stack frame and split address computation; the typed helper is emitted as a leaf. */
#include "common.h"

struct TargetState {
    /* 0x000 */ u8 unk00[0x24e];
    /* 0x24e */ s8 active;
};
/* Reports whether the target's active byte is set. */
extern "C" s32 FUN_0031f524(const TargetState *target)
{
    return target->active != 0;
}

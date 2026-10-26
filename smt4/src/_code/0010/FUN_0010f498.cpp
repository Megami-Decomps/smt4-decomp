#include "common.h"

struct BitFlagState {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 flags[4];
};

extern "C" {
BitFlagState *gameGetQuestCenterBlock(void);
/* Test a packed quest-status bit. */
s32 FUN_0010f498(u32 index)
{
    if (index >= 32) {
        return 0;
    }
    u8 *bits = gameGetQuestCenterBlock()->flags;
    u8 mask = (u8)(1u << (index & 7));
    u32 byte = bits[index >> 3];
    return (mask & byte) != 0;
}
}

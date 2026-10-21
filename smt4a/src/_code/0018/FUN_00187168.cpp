/* NON_MATCHING: retail uses beq 14 where the compiled block uses ldrne r0, [r0, #304]. */
#include "common.h"

struct FlagState {
    u8 unk00[0x130]; // 0x000
    u32 flags;      // 0x130
};

extern "C" u32 FUN_00187168(const FlagState* state)
{
    if (state == NULL)
        return 0;

    return (state->flags & 1) != 0;
}

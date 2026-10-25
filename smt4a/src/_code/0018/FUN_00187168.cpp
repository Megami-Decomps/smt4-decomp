#include "common.h"

struct FlagState {
    u8 unk00[0x130]; // 0x000
    u32 flags;      // 0x130
};

// Whether bit 0 of the state's flags is set; a missing state counts as clear.
extern "C" u32 FUN_00187168(const FlagState* state)
{
    if (state == NULL)
        return 0;
    u32 bit = state->flags & 1;
    return bit ? 1 : 0;
}

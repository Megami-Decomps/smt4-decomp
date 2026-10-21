#include "common.h"

namespace {
struct StaffRollState {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ u8 completed;
};
}

extern "C" {
extern StaffRollState *g_staffRoll;
void gameFlagSetValue(u32 flag, u32 value, u32 count);

/* Marks the staff roll complete in both the save flags and its local state. */
void FUN_0036b1ec(void)
{
    StaffRollState *staffRoll = g_staffRoll;
    gameFlagSetValue(0x565, 1, 1);
    staffRoll->completed = 1;
}
}

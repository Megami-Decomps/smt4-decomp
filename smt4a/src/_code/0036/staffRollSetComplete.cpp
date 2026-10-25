#include "common.h"
#include "gamedata/GameFlags.h"

namespace {
struct StaffRollState {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ u8 completed;
};
}

extern "C" {
extern StaffRollState *g_staffRoll;


/* Marks the staff roll complete in both the save flags and its local state. */
void staffRollSetComplete(void)
{
    StaffRollState *staffRoll = g_staffRoll;
    gameFlagSetValue(0x565, 1, 1);
    staffRoll->completed = 1;
}
}

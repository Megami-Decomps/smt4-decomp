#include "common.h"

struct StaffRollState {
    /* 0x000 */ u8 unk00[0x14c];
    /* 0x14c */ s32 state;
    /* 0x150 */ u8 unk150[0x610];
    /* 0x760 */ s32 timer;
};

extern "C" {

extern StaffRollState *g_staffRoll;

/* Advances to state three when the staff-roll timer expires. */
void staffRollTickExitTimer()
{
    StaffRollState *staffRoll = g_staffRoll;
    --staffRoll->timer;
    if (staffRoll->timer < 0)
        staffRoll->state = 3;
}

}

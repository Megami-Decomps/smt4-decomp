#include "common.h"

extern "C" {

struct StaffRoll {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ u32 state;
};
extern StaffRoll *g_staffRoll;
s32 FUN_002e07f4(void);

static __inline void staffRollSetState(StaffRoll *work, u32 state)
{
    work->state = state;
}

void staffRollAdvanceState(void)
{
    if (FUN_002e07f4()) {
        staffRollSetState(g_staffRoll, 5);
    }
}

} /* extern "C" */

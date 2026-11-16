#include "common.h"

extern "C" {

struct StaffRoll {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ u32 state;
};
extern StaffRoll *g_staffRoll;
s32 pairedAvailabilityBothReady(void);

static __inline void staffRollSetState(StaffRoll *work, u32 state)
{
    work->state = state;
}

void staffRollAdvanceState(void)
{
    if (pairedAvailabilityBothReady()) {
        staffRollSetState(g_staffRoll, 5);
    }
}

} /* extern "C" */

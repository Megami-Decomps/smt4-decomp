/* NON_MATCHING: retail uses `mov r1, #5` where armcc emits `ldr r1, [r0]`. */
#include "common.h"

extern "C" {

struct StaffRoll {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ u32 state;
};
extern StaffRoll *g_staffRoll;
s32 FUN_002e07f4(void);

void staffRollAdvanceState(void)
{
    if (FUN_002e07f4()) {
        g_staffRoll->state = 5;
    }
}

} /* extern "C" */

/* NON_MATCHING: retail uses mov r2, #0 where the compiled block uses mov r3, #0. */
#include "common.h"

struct StatusDown {
    u8 unk00[0x518];
    u32 currentState;  // 0x518
    u32 previousState; // 0x51C
    u32 transition;    // 0x520
    u32 counter;       // 0x524
};

extern "C" {
extern StatusDown* g_statusDown;
void FUN_00230b9c(s32 enabled, u32 mask, s32 mode);

void FUN_00285774(void)
{
    StatusDown* originalStatus = g_statusDown;
    FUN_00230b9c(1, 0xFFFFFFFFu, 0);

    StatusDown* status = g_statusDown;
    status->counter = 0;
    status->previousState = status->currentState;
    status->currentState = 1;
    originalStatus->transition = 3;
}
}

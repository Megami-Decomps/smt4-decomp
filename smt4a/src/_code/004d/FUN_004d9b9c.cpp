/* Runs a (removed) hook on the global state while holding its critical section. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

struct State004d9b9c {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 criticalSection[0x10];
};

extern State004d9b9c DAT_00618824;

__weak void FUN_004d9b9c_hook(State004d9b9c *state);

void FUN_004d9b9c(void)
{
    u8 *cs;
    State004d9b9c *state = &DAT_00618824;

    cs = state->criticalSection;
    ScopedCriticalLock lock(cs);
    FUN_004d9b9c_hook(state);
}

}

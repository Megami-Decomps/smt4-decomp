/* NON_MATCHING: register allocation only: retail keeps the state pointer in r5 and the critical section pointer in r4 (the built code swaps them) */
/* Runs a (removed) hook on the global state while holding its critical section. */
#include "common.h"

extern "C" {

struct State004d9b9c {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 criticalSection[0x10];
};

extern State004d9b9c DAT_00618824;

void nn_os_CriticalSection_Enter(u8 *cs);
void nn_os_CriticalSection_Leave(u8 *cs);
__weak void FUN_004d9b9c_hook(State004d9b9c *state);

void FUN_004d9b9c(void)
{
    u8 *cs;
    State004d9b9c *state = &DAT_00618824;

    cs = state->criticalSection;
    nn_os_CriticalSection_Enter(cs);
    FUN_004d9b9c_hook(state);
    nn_os_CriticalSection_Leave(cs);
}

}

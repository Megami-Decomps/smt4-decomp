/* NON_MATCHING: retail retains an unreferenced 0x0044e608 pool word before its relocations. */
#include "common.h"

struct CallbackState {
    u32 kind; // 0x00
    u32 unk04;
    u64 argument; // 0x08
    u64 result; // 0x10
};

extern "C" {
extern const u32 DAT_00407eac[];
extern u32 DAT_004d4280;
void nn_os_CriticalSection_Initialize(u32 *);
void _ZN2nn2os15CriticalSectionD1Ev(void *);
void entry(void);
void __aeabi_atexit(void *, void (*)(void *), void *);

// Initialize callback storage and its process-wide critical section.
void FUN_003ec298(u64 argument, CallbackState *state)
{
    state->argument = argument;
    state->result = 0;
    state->kind = DAT_00407eac[1];
    DAT_004d4280 = 0;
    nn_os_CriticalSection_Initialize(&DAT_004d4280);
    __aeabi_atexit(&DAT_004d4280, _ZN2nn2os15CriticalSectionD1Ev, (void *)&entry);
}
}

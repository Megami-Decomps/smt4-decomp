/* NON_MATCHING: same calls (first registration is the linker-NOPed __aeabi_atexit); retail steps the pointer with add r4, r4, #12 before the store and sets r0 after the first store, armcc uses a writeback store and sets r0 first */
#include "common.h"

struct CriticalSection {
    u32 state;
    u8 unk04[8];
};

extern "C" {
extern CriticalSection g_asdCecMessageBoxCriticalSection[2];
void nn_os_CriticalSection_Initialize(CriticalSection *);
void FUN_0042ce3c(void *);
void entry(void);
__weak s32 __aeabi_atexit(CriticalSection *, void (*)(void *), void *);
void emptyStub_002f4370(CriticalSection *, void (*)(void *), void *);

// Initialize both static critical sections and register their teardown callbacks.
void FUN_00511778(void)
{
    CriticalSection *section = &g_asdCecMessageBoxCriticalSection[0];
    section->state = 0;
    nn_os_CriticalSection_Initialize(section);
    __aeabi_atexit(section, FUN_0042ce3c, (void *)&entry);
    section++;
    section->state = 0;
    nn_os_CriticalSection_Initialize(section);
    emptyStub_002f4370(section, FUN_0042ce3c, (void *)&entry);
}
}

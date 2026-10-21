/* NON_MATCHING: retail eliminates the first teardown registration as a MOV-style NOP while retaining the named stub tail call; object-only linking retains both calls. */
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
void emptyStub_002f4370(CriticalSection *, void (*)(void *), void *);

// Initialize both static critical sections and register their teardown callbacks.
void FUN_00511778(void)
{
    g_asdCecMessageBoxCriticalSection[0].state = 0;
    nn_os_CriticalSection_Initialize(&g_asdCecMessageBoxCriticalSection[0]);
    emptyStub_002f4370(&g_asdCecMessageBoxCriticalSection[0], FUN_0042ce3c, (void *)&entry);
    g_asdCecMessageBoxCriticalSection[1].state = 0;
    nn_os_CriticalSection_Initialize(&g_asdCecMessageBoxCriticalSection[1]);
    emptyStub_002f4370(&g_asdCecMessageBoxCriticalSection[1], FUN_0042ce3c, (void *)&entry);
}
}

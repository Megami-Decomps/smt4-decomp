/* NON_MATCHING: retail uses ldr r4, [pc, #32] where the compiled block uses ldr r1, [pc, #36]. */
#include "common.h"

struct CriticalSection {
    u32 state; // 0x00
};

extern "C" {
extern CriticalSection DAT_004e6cd0;
extern u8 entry;

void nn_os_CriticalSection_Initialize(CriticalSection* section);
void FUN_003574a8(CriticalSection* section);
s32 sceneNotifyNoop(CriticalSection* object,
                 void (*destructor)(CriticalSection*), void* moduleHandle);

void FUN_003f2988(void)
{
    DAT_004e6cd0.state = 0;
    nn_os_CriticalSection_Initialize(&DAT_004e6cd0);
    sceneNotifyNoop(&DAT_004e6cd0, FUN_003574a8, &entry);
}
}

/* NON_MATCHING: retail uses ldr r0, [pc, #48] where the compiled block uses ldr ip, [pc, #48]. */
#include "common.h"

struct InitializationState {
    u8 unk00[0x90];
    u32 valueLow;  // 0x90
    u32 valueHigh; // 0x94
};

struct SharedState {
    u32 first;  // 0x00
    u32 second; // 0x04
};

struct CriticalSection {
    u32 state; // 0x00
};

extern "C" {
extern SharedState DAT_0044e448;
extern CriticalSection DAT_004c644c;
extern u8 entry;

void nn_os_CriticalSection_Initialize(CriticalSection* section);
void FUN_003574a8(CriticalSection* section);
s32 sceneNotifyNoop(CriticalSection* object,
                 void (*destructor)(CriticalSection*),
                 void* moduleHandle);

s32 FUN_003f2034(u32 valueLow, u32 valueHigh, InitializationState* state)
{
    state->valueLow = valueLow;
    state->valueHigh = valueHigh;

    DAT_0044e448 = SharedState();
    DAT_004c644c.state = 0;
    nn_os_CriticalSection_Initialize(&DAT_004c644c);

    return sceneNotifyNoop(&DAT_004c644c, FUN_003574a8, &entry);
}
}

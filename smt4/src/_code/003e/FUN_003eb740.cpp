/* NON_MATCHING: retail uses ldr r0, [pc, #48] where the compiled block uses ldr ip, [pc, #48]. */
#include "common.h"

struct SavedValues {
    u32 unk00;       // 0x00
    u32 unk04;       // 0x04
    u32 low;         // 0x08
    u32 high;        // 0x0C
};

struct GlobalValues {
    u32 low;         // 0x00
    u32 high;        // 0x04
};

extern "C" {
extern GlobalValues DAT_0044e358;
extern u32 DAT_004c6410;
extern u8 entry[];

void nn_os_CriticalSection_Initialize(u32* criticalSection);
void FUN_003574a8(u32* object);
s32 sceneNotifyNoop(u32* object, void (*destructor)(u32*), void* module);

s32 FUN_003eb740(u32 low, u32 high, SavedValues* saved)
{
    saved->low = low;
    saved->high = high;

    DAT_0044e358 = GlobalValues();
    DAT_004c6410 = 0;
    nn_os_CriticalSection_Initialize(&DAT_004c6410);

    return sceneNotifyNoop(&DAT_004c6410, FUN_003574a8, entry);
}
}

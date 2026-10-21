/* NON_MATCHING: retail uses ldr r4, [pc, #32] where the compiled block uses ldr r1, [pc, #36]. */
#include "common.h"

extern "C" {

extern u32 DAT_004e629c;
extern u8 entry[];

void nn_os_CriticalSection_Initialize(u32* criticalSection);
void FUN_003574a8(void* object);
s32 sceneNotifyNoop(void* object, void (*destructor)(void*), void* dsoHandle);

void FUN_003ef7e4(void)
{
    DAT_004e629c = 0;
    nn_os_CriticalSection_Initialize(&DAT_004e629c);
    sceneNotifyNoop(&DAT_004e629c, FUN_003574a8, entry);
}

}

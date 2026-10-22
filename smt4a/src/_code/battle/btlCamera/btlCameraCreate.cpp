#include "battle/btlCamera.h"
#include "AsdSDK/AsdDebug.h"
extern "C" {
s32 btlCameraDispatchCurrentJob(void);
void btlCameraDestroy(void);
u32 taskCreateDraw(const char*, s32, u32, u32, s32 (*)(void), void (*)(void), void*, u32);
void* asdMemoryAllocTracked(s32, s32, s32, u32, s32);
void FUN_004f0e20(BtlCameraA*, BtlCameraJobA*);
extern BtlCameraA* g_btlCamera;

void btlCameraCreate(BtlCameraJobA* owner)
{
    owner->drawJob = taskCreateDraw("btlCamera Calc", 4, 0, 0, btlCameraDispatchCurrentJob,
        btlCameraDestroy, owner, owner->ownerHandle);
    if (g_btlCamera == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlCamera.cpp", 2588);
        g_btlCamera = (BtlCameraA*)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BtlCameraA), 1);
    }
    FUN_004f0e20(g_btlCamera, owner);
}
}

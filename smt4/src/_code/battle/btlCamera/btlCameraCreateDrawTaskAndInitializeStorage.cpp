#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

// Private view of the fields used by this routine.
struct BattleCameraOwnerView {
    u32 unk00;             // 0x00
    u8 unk04[0x40];        // 0x04
    void* unk44;           // 0x44
};

extern "C" {
extern void* g_btlMain;

void btlDispatchCurrentJob();
void scrDestroyActive();
void* taskCreateDraw(const char* name, s32 priority, s32 arg2, s32 arg3,
                     void (*update)(), void (*destroy)(),
                     BattleCameraOwnerView* owner, u32 ownerValue);
void FUN_003d5830(void* storage, BattleCameraOwnerView* owner);

// Create the camera draw task, allocate shared storage if needed, then initialize it.
void btlCameraCreateDrawTaskAndInitializeStorage(BattleCameraOwnerView* owner)
{
    owner->unk44 = taskCreateDraw("btlCamera Calc", 2, 0, 0,
                                  btlDispatchCurrentJob, scrDestroyActive,
                                  owner, owner->unk00);

    if (g_btlMain == 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlCamera.cpp", 0x939);
        g_btlMain = asdMemAlloc(0x100, 0x100, 0, 0x848, 1);
    }

    FUN_003d5830(g_btlMain, owner);
}
}

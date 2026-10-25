#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"
#include "classes/Obj420fa4.h"

extern "C" {
extern AsdNgc g_asdNgc;
extern void *DAT_005b3fb0;

void nn_cfg_CTR_Initialize(void);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 options,
                            u32 size, s32 fromFront);
u32 FUN_00146f0c(void *work, void *buffer);

s32 asdNgcInit(void)
{
    s32 ready = 0;
    nn_cfg_CTR_Initialize();
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Ngc\\AsdNgc.cpp", 93);

    DAT_005b3fb0 = asdMemoryAllocTracked(0x100, 0x100, 0, 0x10000, 1);
    if (static_cast<s32>(FUN_00146f0c(g_asdNgc.work, DAT_005b3fb0) & 0x80000000u) < 0)
        return ready;
    if (((Obj420fa4 *)g_asdNgc.work)->Obj420fa4::vfunc08() == 0)
        return ready;
    ready = 1;
    g_asdNgc.flags |= ASD_NGC_READY;
    return ready;
}
}

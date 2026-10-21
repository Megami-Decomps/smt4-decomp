/* NON_MATCHING: retail uses mov r4, #0 where the compiled block uses ldr r4, [pc, #116]. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"

extern "C" {
extern AsdNgc g_asdNgc;
extern void *DAT_005b3fb0;

void nn_cfg_CTR_Initialize(void);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 options,
                            u32 size, s32 fromFront);
u32 FUN_00146f0c(void *work, void *buffer);
s32 FUN_00146f68(void *work);

s32 asdNgcInit(void)
{
    nn_cfg_CTR_Initialize();
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Ngc\\AsdNgc.cpp", 93);

    DAT_005b3fb0 = asdMemoryAllocTracked(0x100, 0x100, 0, 0x10000, 1);
    if ((FUN_00146f0c(g_asdNgc.work, DAT_005b3fb0) & 0x80000000u) == 0 &&
        FUN_00146f68(g_asdNgc.work) != 0) {
        g_asdNgc.flags |= ASD_NGC_READY;
        return 1;
    }
    return 0;
}
}

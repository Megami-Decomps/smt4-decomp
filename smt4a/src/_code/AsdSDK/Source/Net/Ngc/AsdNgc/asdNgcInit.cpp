#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdNgc g_asdNgc;
extern void *DAT_005b3fb0; /* work buffer */

void nn_cfg_CTR_Initialize(void);
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 FUN_00146f0c(void *work, void *buffer);
s32 FUN_00146f68(void *work);

/* Brings up nn::ngc with a 64 KB work buffer; returns 1 when the bad-word check is usable. */
s32 asdNgcInit(void)
{
    s32 ready = 0;

    nn_cfg_CTR_Initialize();
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Ngc\\AsdNgc.cpp", 93);
    DAT_005b3fb0 = asdMemoryAllocTracked(0x100, 0x100, 0, 0x10000, 1);
    if ((s32)(FUN_00146f0c(g_asdNgc.work, DAT_005b3fb0) & 0x80000000) >= 0 && FUN_00146f68(g_asdNgc.work) != 0) {
        ready = 1;
        g_asdNgc.flags |= ASD_NGC_READY;
        return ready;
    }
    return ready;
}

} /* extern "C" */

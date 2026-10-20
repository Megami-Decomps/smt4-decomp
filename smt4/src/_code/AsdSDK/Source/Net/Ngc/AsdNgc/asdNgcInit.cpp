/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the work buffer allocation. */
#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"

extern "C" {
extern AsdNgc g_asdNgc;
extern void *DAT_00464fd8; /* work buffer */

void nn_cfg_CTR_Initialize(void);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
s32 FUN_0010fd38(void *work, void *buffer);
s32 FUN_0010fd94(void *work);

/* Brings up nn::ngc with a 64 KB work buffer; returns 1 when the bad-word check is usable. */
s32 asdNgcInit(void)
{
    nn_cfg_CTR_Initialize();
    DAT_00464fd8 = asdMemAlloc(0x100, 0x100, 0, 0x10000, 1);
    if (FUN_0010fd38(g_asdNgc.work, DAT_00464fd8) >= 0 && FUN_0010fd94(g_asdNgc.work) != 0) {
        g_asdNgc.flags |= ASD_NGC_READY;
        return 1;
    }
    return 0;
}

} /* extern "C" */

#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"
#include "AsdSDK/AsdDebug.h"
#include "classes/Obj420fa4.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern AsdNgc g_asdNgc;
extern void *g_textScannerModuleState; /* work buffer */

void nn_cfg_CTR_Initialize(void);
u32 FUN_0010fd38(void *work, void *buffer);

/* Brings up nn::ngc with a 64 KB work buffer; returns 1 when the bad-word check is usable. */
s32 asdNgcInit(void)
{
    s32 ready = 0;

    nn_cfg_CTR_Initialize();
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Net\\Ngc\\AsdNgc.cpp", 93);
    g_textScannerModuleState = asdMemAlloc(0x100, 0x100, 0, 0x10000, 1);
    if ((s32)(FUN_0010fd38(g_asdNgc.work, g_textScannerModuleState) & 0x80000000) >= 0 && ((Obj420fa4 *)g_asdNgc.work)->Obj420fa4::vfunc08() != 0) {
        ready = 1;
        g_asdNgc.flags |= ASD_NGC_READY;
        return ready;
    }
    return ready;
}

} /* extern "C" */

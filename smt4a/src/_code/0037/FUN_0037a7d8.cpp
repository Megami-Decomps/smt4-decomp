#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void FUN_005019e4(AsdCecMessageBox *box, s32 kind, u32 arg);

void FUN_0037a7d8(u32 arg)
{
    FUN_005019e4(g_asdCec.cec->box, ASD_CEC_OUTBOX, arg);
}

} /* extern "C" */

#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void FUN_003e0634(AsdCecMessageBox *box, s32 kind, u32 arg);

void cecOutboxPost(u32 arg)
{
    FUN_003e0634(g_asdCec.cec->box, ASD_CEC_OUTBOX, arg);
}

} /* extern "C" */

#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void cecMessageBoxFindByKey(AsdCecMessageBox *box, s32 kind, u32 arg);

void cecOutboxPost(u32 arg)
{
    cecMessageBoxFindByKey(g_asdCec.cec->box, ASD_CEC_OUTBOX, arg);
}

} /* extern "C" */

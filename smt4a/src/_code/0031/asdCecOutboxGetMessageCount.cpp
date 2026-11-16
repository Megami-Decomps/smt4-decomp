/* NON_MATCHING: retail if-converts the success path's three loads (ldrge) ahead of the close call; the build branches over them. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "network/CecControl_AsdCec.h"
#include "nn/Result.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 first, u32 second);

/* Reads the outbox message count with the message box opened; 0 when it cannot be opened. */
u32 asdCecOutboxGetMessageCount(void)
{
    AsdCec *cec = g_asdCec.cec;
    s32 result = asdCecMessageBoxOpen(cec->box, cec->unk00, cec->unk04);
    if (!nnResultIsSuccess(result)) {
        return 0;
    }
    u32 count = g_asdCec.cec->box->outboxCount;
    asdCecMessageBoxClose(g_asdCec.cec->box);
    return count;
}
}

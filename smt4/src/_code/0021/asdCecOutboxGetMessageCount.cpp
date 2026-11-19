#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "network/CecControl_AsdCec.h"
#include "nn/Result.h"
#include "shard/W6_W6Match6_CecMessageBox.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

/* Reads the outbox message count with the message box opened; 0 when it cannot be opened. */
u32 asdCecOutboxGetMessageCount(void)
{
    AsdCec *cec = g_asdCec.cec;
    s32 result = asdCecMessageBoxOpen(cec->box, cec->unk00, cec->unk04);
    AsdCecMessageBox *box;
    u32 count;
    if (!nnResultIsSuccess(result)) {
        return 0;
    } else {
        box = g_asdCec.cec->box;
        count = box->outboxCount;
    }
    asdCecMessageBoxClose(box);
    return count;
}
}

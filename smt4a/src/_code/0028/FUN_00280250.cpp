/* NON_MATCHING: inbox-count load uses r1 instead of r0, avoiding retail's conditional pointer move. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/Result.h"
#include "shard/asdCecMessageBoxClose.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *, u32, u32);

// Keep the inbox open only when it contains at least one message.
u8 FUN_00280250(void)
{
    u8 hasMessages = 0;
    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00,
                                    g_asdCec.cec->unk04);
    if (nnResultIsSuccess(result)) {
        hasMessages = g_asdCec.cec->box->inboxCount != 0;
        if (!hasMessages)
            asdCecMessageBoxClose(g_asdCec.cec->box);
    }
    return hasMessages;
}
}

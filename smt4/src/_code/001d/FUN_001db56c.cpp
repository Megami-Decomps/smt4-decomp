/* NON_MATCHING: inbox-count load uses r1 and the box pointer r0 where retail loads the count into r0 and keeps the box in r1 (conditional pointer move); box/messages locals as in the smt4a twin do not change it. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/Result.h"
#include "network/CecControl_AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *, u32, u32);

// Keep the inbox open only when it contains at least one message.
u8 FUN_001db56c(void)
{
    u8 hasMessages = 0;
    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00,
                                    g_asdCec.cec->unk04);
    if (nnResultIsSuccess(result)) {
        AsdCecMessageBox *box = g_asdCec.cec->box;
        s32 messages = box->inboxCount;
        if (messages != 0) {
            hasMessages = 1;
        } else {
            asdCecMessageBoxClose(box);
        }
    }
    return hasMessages;
}
}

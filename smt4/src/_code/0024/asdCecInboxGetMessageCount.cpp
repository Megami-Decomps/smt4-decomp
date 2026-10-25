#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/Result.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *, u32, u32);
void asdCecMessageBoxClose(AsdCecMessageBox *);

// Open the inbox, read its message count, and close it again.
s32 asdCecInboxGetMessageCount(void)
{
    s32 count = 0;
    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00,
                                    g_asdCec.cec->unk04);
    if (nnResultIsSuccess(result)) {
        AsdCecMessageBox *box = g_asdCec.cec->box;
        s32 messages = box->inboxCount;
        if (messages != 0) {
            count = messages;
        }
        asdCecMessageBoxClose(box);
    }
    return count;
}
}

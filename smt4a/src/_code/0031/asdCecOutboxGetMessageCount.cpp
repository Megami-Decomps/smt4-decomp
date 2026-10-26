/* NON_MATCHING: compiler recognizes the result high-bit mask as a signed comparison and removes the retail AND. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "shard/asdCecMessageBoxClose.h"
extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *box,u32 first,u32 second);
/* Read the outbox count while the message box is open, returning zero on failure. */
u32 asdCecOutboxGetMessageCount(void) { u32 result=asdCecMessageBoxOpen(g_asdCec.cec->box,g_asdCec.cec->unk00,g_asdCec.cec->unk04); if ((s32)(result&0x80000000)<0) return 0; u32 count=g_asdCec.cec->box->outboxCount; asdCecMessageBoxClose(g_asdCec.cec->box); return count; }
}

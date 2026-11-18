#ifndef SMT4_CEC_OUTBOX_H
#define SMT4_CEC_OUTBOX_H
#include "cec/CecMessage.h"
#include "classes/Obj420a1c.h"
#include "nn/cec/MessageKey.h"

extern "C" {
u32 cecMessageBoxFindMessageByKey(AsdCecMessageBox *box, s32 kind, const CecMessageKey *key);
u32 cecOutboxPost(const CecMessageKey *key);
u32 asdCecOutboxGetMessageCount();
u8 asdCecReadOutboxMessage(u32 index, void *out);
void resourceLookupWithFallback(Obj420a1c *owner, CecProcessSlot *out);
}
#endif

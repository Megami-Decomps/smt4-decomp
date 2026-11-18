#include "cec/CecOutbox.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

u32 cecOutboxPost(const CecMessageKey *key)
{
    return cecMessageBoxFindMessageByKey(g_asdCec.cec->box, ASD_CEC_OUTBOX, key);
}
}

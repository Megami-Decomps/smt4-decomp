#include "cec/CecOutbox.h"

// Read the owner's saved message, falling back to slot zero if its key is absent or unreadable.
extern "C" void resourceLookupWithFallback(Obj420a1c *owner, CecProcessSlot *out)
{
    if (asdCecOutboxGetMessageCount()) {
        const CecMessageKey *key = reinterpret_cast<const CecMessageKey *>(owner->messageId.data);
        if (!asdCecReadOutboxMessage(cecOutboxPost(key), out))
            asdCecReadOutboxMessage(0, out);
    }
}

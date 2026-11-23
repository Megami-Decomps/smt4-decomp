#include "shard/W6_W6Match1_QueuedRequestToken.h"
#include "addon/aocMain.h"
#include "util/BitsAndBytes.h"

extern "C" {
u8 FUN_0015e8b4(QueuedRequestHandle* handle);
u32 queuedHandleGetToken(QueuedRequestHandle* handle);
u32 jyoucyuGetTableEntry(s32 index);

/* Takes a queued request with `parameters` unless one is pending (flag 8): stores it with the handle's token and
 * sets the pending flags (9). Returns 0 while the handle is not ready, else 1. */
u32 _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle(AocMain *owner, const RequestParameters* parameters, QueuedRequestHandle handle)
{
    if (FUN_0015e8b4(&handle) == 0) {
        return 0;
    }
    if ((owner->flags & 8) == 0) {
        owner->request = *parameters;
        owner->token = queuedHandleGetToken(&handle);
        flagsSetBits(&owner->flags, 9);
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

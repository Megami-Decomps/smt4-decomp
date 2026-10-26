/* NON_MATCHING: retail reloads the flag word after the parameter copy and stores it through [owner,#1876]; build hoists the flag address into r5 (VOLATILE-CANDIDATE: flags). */
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {
u8 FUN_0015e8b4(QueuedRequestHandle* handle);
u32 queuedHandleGetToken(QueuedRequestHandle* handle);
u32 jyoucyuGetTableEntry(s32 index);

u32 _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle(QueuedRequestTokenState* owner, const RequestParameters* parameters, QueuedRequestHandle handle)
{
    if (FUN_0015e8b4(&handle) == 0) {
        return 0;
    }
    if ((owner->state.flags & 8) == 0) {
        owner->state.parameters = *parameters;
        owner->token = queuedHandleGetToken(&handle);
        owner->state.flags = owner->state.flags | 9;
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

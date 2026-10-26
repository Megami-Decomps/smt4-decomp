/* NON_MATCHING: armcc forms the flags address (owner + 1876) once and keeps it in r5 for the final store, so allocation of r5/r6 and the branch targets differ; retail reloads through [r4,#1876]. */
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {
u8 FUN_001d25dc(QueuedRequestHandle* handle);
u32 slotTargetHolderGetTarget(const QueuedRequestHandle* handle);
u32 jyoucyuGetTableEntry(s32 index);

u32 _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle(QueuedRequestTokenState* owner, const RequestParameters* parameters, QueuedRequestHandle handle)
{
    if (FUN_001d25dc(&handle) == 0) {
        return 0;
    }
    if ((owner->state.flags & 8) == 0) {
        owner->state.parameters = *parameters;
        owner->token = slotTargetHolderGetTarget(&handle);
        owner->state.flags |= 9;
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

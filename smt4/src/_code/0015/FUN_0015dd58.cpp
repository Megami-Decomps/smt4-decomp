/* NON_MATCHING: aggregate copy retains flags and loads handle.token at SP+12; retail copies five registers, reloads flags, and addresses token via SP+8 then field4. */
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {
u8 FUN_0015e8b4(QueuedRequestHandle* handle);
u32 jyoucyuGetTableEntry(s32 index);

u32 FUN_0015dd58(QueuedRequestTokenState* owner, const RequestParameters* parameters, QueuedRequestHandle handle)
{
    if (FUN_0015e8b4(&handle) == 0) {
        return 0;
    }
    if ((owner->state.flags & 8) == 0) {
        owner->state.parameters = *parameters;
        owner->token = handle.token;
        owner->state.flags |= 9;
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

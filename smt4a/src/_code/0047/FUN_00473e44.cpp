/* NON_MATCHING: whole-parameter assignment uses one five-register LDM/STM and a larger saved frame; retail splits the first/final words from a three-word copy and merges flags with the first word. */
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {
void* jyoucyuGetTableEntry(u32 index);

// Queues parameters and their token unless a request is already pending.
u32 FUN_00473e44(QueuedRequestState* state, const RequestParameters* parameters, u32 token)
{
    if (!(state->flags & 8)) {
        state->parameters = *parameters;
        reinterpret_cast<QueuedRequestTokenState*>(state)->token = token;
        state->flags |= 9;
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

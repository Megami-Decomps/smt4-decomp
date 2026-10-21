/* NON_MATCHING: compiler splits the 20-byte parameter snapshot and combines scalar stores differently. */
#include "shard/W6_W6Match5_QueuedRequest.h"

// Queue parameters only when no request is already active.
extern "C" void FUN_002ba968(QueuedRequestState *state, const RequestParameters *parameters,
                            u32 argument, s32 mode)
{
    if ((state->flags & 1) == 0) {
        state->flags |= 5;
        if (mode != 0)
            state->mode = mode;
        RequestParameters request = *parameters;
        state->argument = argument;
        state->progress = 0;
        state->parameters = request;
    }
}

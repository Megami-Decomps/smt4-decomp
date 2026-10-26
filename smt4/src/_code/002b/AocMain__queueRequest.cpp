#include "addon/aocMain.h"

/* Queues `request` for processing unless one is already active. */
void AocMain::queueRequest(RequestParameters request, u32 argument, s32 mode)
{
    QueuedRequestState *state = reinterpret_cast<QueuedRequestState *>(this);

    u32 flags = state->flags;
    if ((flags & 1) == 0) {
        flags |= 5;
        state->flags = flags;
        if (mode != 0) {
            state->mode = mode;
        }
        state->parameters = request;
        state->argument = argument;
        state->progress = 0;
    }
}

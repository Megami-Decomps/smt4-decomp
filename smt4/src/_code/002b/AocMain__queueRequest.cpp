/* NON_MATCHING: retail loads all five request words in one ldm before the argument/progress stores and writes them back with one stm; armcc splits the copy (ldm of three plus two ldr/str). */
#include "addon/aocMain.h"

/* Queues `request` for processing unless one is already active. */
void AocMain::queueRequest(RequestParameters request, u32 argument, s32 mode)
{
    QueuedRequestState *state = reinterpret_cast<QueuedRequestState *>(this);

    if ((state->flags & 1) == 0) {
        state->flags |= 5;
        if (mode != 0) {
            state->mode = mode;
        }
        state->argument = argument;
        state->progress = 0;
        state->parameters = request;
    }
}

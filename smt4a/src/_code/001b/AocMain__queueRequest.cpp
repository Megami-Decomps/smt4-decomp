#include "addon/aocMain.h"

/* Queues `request` for processing unless one is already active. */
void AocMain::queueRequest(RequestParameters request, u32 argument, s32 mode)
{
    u32 currentFlags = flags;
    if ((currentFlags & 1) == 0) {
        currentFlags |= 5;
        flags = currentFlags;
        if (mode != 0) {
            this->mode = mode;
        }
        this->request = request;
        this->argument = argument;
        progress = 0;
    }
}

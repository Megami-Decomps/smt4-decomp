#include "addon/aocMain.h"
#include "util/BitsAndBytes.h"

extern "C" {
void* jyoucyuGetTableEntry(u32 index);

/* Queues parameters and their token unless a request is already pending (flag 8), setting the pending flags (9). */
u32 aocMainQueueRequest(AocMain *main, const RequestParameters* parameters, u32 token)
{
    if (!(main->flags & 8)) {
        main->request = *parameters;
        main->token = token;
        flagsSetBits(&main->flags, 9);
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}

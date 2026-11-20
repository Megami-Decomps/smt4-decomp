#include "code/Code0014.h"
#include "code/Code0015.h"
#include "common.h"

extern "C" {

s32 voiceRequestPlayFile(s32 kind, u32 arg, u32 value, u32 flags, f32 scaleX, f32 scaleY);

/* Forwards the request to voiceRequestPlayFile with a 0.707 scale on both axes; kinds 1 and 3 also set flag 4. Always returns 1. */
u32 scrCommQueueRequest(s32 kind, u32 arg)
{
    u32 flags = messageVoiceFlagsGet();

    if (kind == 1 || kind == 3) {
        flags |= 4;
    }
    voiceRequestPlayFile(kind, arg, messageVoiceBankGet(), flags, 0.707f, 0.707f);
    return 1;
}

} /* extern "C" */

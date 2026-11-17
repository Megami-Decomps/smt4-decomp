/* NON_MATCHING: retail places the 0.0f literal before g_messageMain in the pool. */
#include "ui/MessageMainA.h"

extern "C" {

f32 messageGetActiveValue(u32 index)
{
    f32 value = 0.0f;
    MessageWindowA *banner = g_messageMain.banner;
    if (banner->activeValueEnabled && index < 3) {
        value = banner->activeValues[index];
    }
    return value;
}

} /* extern "C" */

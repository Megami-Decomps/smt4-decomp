/* Built with the unit's cflags (-O2 -Otime). */
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

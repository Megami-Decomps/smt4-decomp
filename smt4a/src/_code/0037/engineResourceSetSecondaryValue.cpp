#include "shard/W5_W5Match7_ResourceHandles.h"

extern "C" {

void renderWithTemporaryDrawState(void *owner, s32 value);

s32 engineResourceSetSecondaryValue(s32 value)
{
    if (g_engineResourceHandles.secondary != NULL) {
        renderWithTemporaryDrawState(g_engineResourceHandles.secondary, value);
    }
    return 0;
}

} /* extern "C" */

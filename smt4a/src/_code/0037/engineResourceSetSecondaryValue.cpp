#include "shard/W5_W5Match7_ResourceHandles.h"
#include "ui/PartnerTopic.h"

extern "C" {

void renderWithTemporaryDrawState(void *owner, s32 value);

s32 engineResourceSetSecondaryValue(u32 handle)
{
    if (g_engineResourceHandles.secondary != NULL) {
        renderWithTemporaryDrawState(g_engineResourceHandles.secondary, handle);
    }
    return 0;
}

} /* extern "C" */

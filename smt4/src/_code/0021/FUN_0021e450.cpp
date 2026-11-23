#include "map/DeferredModels.h"

extern "C" {

extern DeferredModelWork *g_deferredMapModels;

/* Makes the active model with model id 16 the visible selection (hiding the other active models) and
 * records its index for the pending update. */
void FUN_0021e450(void)
{
    for (s32 i = 0; i < 64; i++) {
        DeferredModelEntry *entry = &g_deferredMapModels->entries[i];
        if (entry->active != 0) {
            if (entry->modelId == 16) {
                entry->visible = 1;
                g_deferredMapModels->pendingCount = i;
                g_deferredMapModels->updating = 1;
                g_deferredMapModels->pending = 1;
            } else {
                entry->visible = 0;
            }
        }
    }
}

} /* extern "C" */

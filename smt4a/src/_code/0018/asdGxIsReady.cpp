#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GraphicsReadyState g_gfxSettings;

/* Reports whether both graphics ready flags are set. */
bool asdGxIsReady(void)
{
    return g_gfxSettings.enabled != 0 && g_gfxSettings.ready != 0;
}

} /* extern "C" */

#include "shard/W5_W5Match1_RecordKeys.h"
#include "gfx/GfxSettings.h"

extern "C" {

/* Reports whether both graphics ready flags are set. */
bool asdGxIsReady(void)
{
    return g_gfxSettings.initialized != 0 && g_gfxSettings.ready != 0;
}

} /* extern "C" */

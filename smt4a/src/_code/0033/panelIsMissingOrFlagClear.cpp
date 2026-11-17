#include "ui/MessageMainA.h"
#include "shard/Shard0033.h"

extern "C" {

/* True when there is no panel or its flag at +8 is clear. */
u8 panelIsMissingOrFlagClear(void)
{
    return g_messageMain.banner == NULL || g_messageMain.banner->state == 0;
}

} /* extern "C" */

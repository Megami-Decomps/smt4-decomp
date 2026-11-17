#include "ui/MessageMainA.h"
#include "shard/Shard0034.h"

extern "C" {

/* True when the panel's flag at +0x8E is set and its state is 2. */
u32 panelIsActiveState2(void)
{
    if (g_messageMain.banner->wideValue == 0 || g_messageMain.banner->counterState != 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

#include "shard/Shard0034.h"

extern "C" {

extern PanelRef DAT_0057f588;

/* True when the panel's flag at +0x8E is set and its state is 2. */
u32 panelIsActiveState2(void)
{
    if (DAT_0057f588.panel->unk8E == 0 || DAT_0057f588.panel->state != 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

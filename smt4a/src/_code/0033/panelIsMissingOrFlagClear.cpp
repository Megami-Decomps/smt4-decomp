#include "shard/Shard0033.h"

extern "C" {

extern PanelRef DAT_0057f588;

/* True when there is no panel or its flag at +8 is clear. */
u8 panelIsMissingOrFlagClear(void)
{
    return DAT_0057f588.panel == NULL || DAT_0057f588.panel->flag08 == 0;
}

} /* extern "C" */

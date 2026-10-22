#include "shard/Scene43dcf0.h"

extern "C" {

/* Returns the party panel's state byte, or 0 when there is no panel. */
u8 partyPanelGetState(void)
{
    return g_partyPanel != NULL ? g_partyPanel->state : 0;
}

} /* extern "C" */

#include "common.h"

extern "C" {

extern void *g_partyPanel;

/* Returns whether there is an object at 0x57F268. */
u8 partyPanelExists(void)
{
    return g_partyPanel != NULL;
}

} /* extern "C" */

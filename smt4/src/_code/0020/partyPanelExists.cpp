#include "common.h"

extern "C" {

extern int g_partyPanel;

u8 partyPanelExists(void)
{
    return g_partyPanel != 0;
}

} /* extern "C" */

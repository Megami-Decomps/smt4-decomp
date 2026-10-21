#include "common.h"

extern "C" {

extern u16 *g_partyPanel;

void partyPanelReset(void)
{
    u16 *p = g_partyPanel;

    if (p != NULL) {
        p[0x1e] = 0;
        p[0x20] = 0xffff;
        p[0x1f] = 0;
    }
}

} /* extern "C" */

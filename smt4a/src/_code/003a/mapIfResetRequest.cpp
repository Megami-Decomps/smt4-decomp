#include "map/MapIfGlobals.h"

extern "C" {

void mapIfResetRequest(void)
{
    if (g_mapIf.state->notice.state != 0) {
        g_mapIf.state->notice.state = 4;
        g_mapIf.state->notice.frame = 0;
    }
}

} /* extern "C" */

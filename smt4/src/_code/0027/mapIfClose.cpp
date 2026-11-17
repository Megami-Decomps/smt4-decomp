#include "map/MapIfGlobals.h"

extern "C" {

void mapIfClose(void)
{
    MapIfState *state = g_mapIf.state;

    if (state->notice.state != 0) {
        state->notice.state = 3;
        state->notice.frame = 0;
    }
}

} /* extern "C" */

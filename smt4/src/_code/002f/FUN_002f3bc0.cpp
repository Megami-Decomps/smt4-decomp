#include "map/MapIfGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

// Return the selected active map-interface categories from state eight to six.
void FUN_002f3bc0(void)
{
    MapIfState *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord &record = state->records[index];
        if (record.active != 0) {
            if ((record.category == 0x1d || record.category == 0x26 ||
                 record.category == 0x1e || record.category == 0x1f || record.category == 0x25) &&
                record.state == 8)
                record.state = 6;
        }
    }
}
}

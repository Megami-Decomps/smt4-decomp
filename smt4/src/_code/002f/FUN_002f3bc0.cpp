/* NON_MATCHING: all instructions match, but the record address/value use r2/r0 rather than retail r0/r2. */
#include "map/mapIf.h"
#include "shard/Shard0036.h"

extern "C" {
extern MapIfGlobals g_mapIf;

// Return the selected active map-interface categories from state eight to six.
void FUN_002f3bc0(void)
{
    MapIfState *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord &record = state->records[index];
        if (record.active != 0) {
            s32 category = record.display.category;
            if ((category == 0x1d || category == 0x26 ||
                 category == 0x1e || category == 0x1f || category == 0x25) &&
                record.state == 8)
                record.state = 6;
        }
    }
}
}

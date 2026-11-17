#include "map/MapIfGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

// Advance active category-37/40 map records from state eight to state six.
void FUN_00274a30(void)
{
    s32 index = 0;
    MapIfStateA *state = g_mapIf.state;
    for (; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active != 0 &&
            (record->display.category == 37 || record->display.category == 40) &&
            record->state == 8) {
            record->state = 6;
        }
    }
}
}

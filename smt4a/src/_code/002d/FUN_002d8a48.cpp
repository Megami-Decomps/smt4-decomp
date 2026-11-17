#include "map/MapIfGlobals.h"

#include "shard/Shard0036.h"

// Move active map-interface entries in either selected category to state six.
extern "C" void FUN_002d8a48(void)
{
    s32 index = 0;
    MapIfStateA *state = g_mapIf.state;
    for (; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active != 0 &&
            (record->display.category == 37 || record->display.category == 40)) {
            record->state = 6;
        }
    }
}

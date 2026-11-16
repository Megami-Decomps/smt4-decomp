#include "map/mapIf.h"

#include "shard/Shard0036.h"

extern "C" MapIfStateA *g_mapIf;

// Move active map-interface entries in either selected category to state six.
extern "C" void FUN_002d8a48(void)
{
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &g_mapIf->records[index];
        if (record->active != 0 &&
            (record->display.category == 37 || record->display.category == 40)) {
            record->state = 6;
        }
    }
}

#include "map/mapIf.h"
#include "shard/Shard0036.h"

extern "C" {
extern MapIfStateA *g_mapIf;

// Advance active category-37/40 map records from state eight to state six.
void FUN_00274a30(void)
{
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &g_mapIf->records[index];
        if (record->active != 0 &&
            (record->display.category == 37 || record->display.category == 40) &&
            record->state == 8) {
            record->state = 6;
        }
    }
}
}

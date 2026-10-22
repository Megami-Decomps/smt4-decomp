/* NON_MATCHING: global pointer and loop-counter initialization are scheduled differently from retail. */
#include "map/mapIf.h"

#include "shard/Shard0036.h"

extern "C" MapIfGlobalsA g_mapIf;

// Move active map-interface entries in either selected category to state six.
extern "C" void FUN_002d8a48(void)
{
    MapIfStateA *mapInterface = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *entry = &mapInterface->records[i];
        if (entry->active && (entry->display.category == 0x25 ||
                              entry->display.category == 0x28))
            entry->state = 6;
    }
}

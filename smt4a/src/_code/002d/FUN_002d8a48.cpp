/* NON_MATCHING: global pointer and loop-counter initialization are scheduled differently from retail. */
#include "shard/Shard0036.h"

extern "C" RecHolder *g_mapIf;

// Move active map-interface entries in either selected category to state six.
extern "C" void FUN_002d8a48(void)
{
    RecHolder *mapInterface = g_mapIf;
    for (s32 i = 0; i < 128; ++i) {
        Rec194 *entry = &mapInterface->recs[i];
        if (entry->active && (entry->display.category == 0x25 ||
                              entry->display.category == 0x28))
            entry->state = 6;
    }
}

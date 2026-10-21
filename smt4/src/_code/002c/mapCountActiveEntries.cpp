#include "common.h"

namespace { struct Entry { u8 active; u8 padding[0x3b]; }; struct Map { u8 padding[0x24]; Entry entries[16]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Map *g_mapRangeWork;
u32 mapCountActiveEntries(void)
{
    u32 count = 0;
    Entry *entry = g_mapRangeWork->entries;
    for (s32 remaining = 16; remaining != 0; remaining--, entry++) {
        if (entry->active != 0) { count++; }
    }
    return count;
}
}

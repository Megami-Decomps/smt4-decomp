#include "gamedata/TableEntryCache.h"

/* Clears the entry and both of its status flags. */
extern "C" void entryStateClear(EntryState *entry)
{
    entry->first = 0;
    entry->second = 0;
    entry->third = 0;
    entry->active = 0;
    entry->requested = 0;
}

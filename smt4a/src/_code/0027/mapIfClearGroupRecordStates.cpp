#include "map/MapIfGlobals.h"
#include "shard/Shard0036.h"

// Clear the state of each active interface record belonging to the requested group.
extern "C" void mapIfClearGroupRecordStates(s32 id)
{
    MapIfStateA* holder = g_mapIf.state;
    if (holder == NULL) {
        return;
    }
    for (s32 i = 0; i < 0x80; ++i) {
        MapIfRecord* record = &holder->records[i];
        if (record->active != 0 && record->id == id) {
            record->state = 0;
        }
    }
}

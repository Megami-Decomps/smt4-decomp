#include "map/MapIfGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

void mapIfClearMatchingRecord(s32 id)
{
    MapIfStateA* holder = g_mapIf.state;
    for (s32 index = 0; index < 0x80; ++index) {
        MapIfRecord* record = &holder->records[index];
        if (record->active != 0 &&
            (record->category == 0x25 || record->category == 0x28) &&
            record->id == id) {
            record->active = 0;
            record->state = 0x14;
            return;
        }
    }
}
}

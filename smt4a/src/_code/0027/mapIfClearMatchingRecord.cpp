#include "map/mapIf.h"
#include "shard/Shard0036.h"

extern "C" {
extern "C" MapIfGlobalsA g_mapIf;

void mapIfClearMatchingRecord(s32 id)
{
    MapIfStateA* holder = g_mapIf.state;
    for (s32 index = 0; index < 0x80; ++index) {
        MapIfRecord* record = &holder->records[index];
        if (record->active != 0 &&
            (record->display.category == 0x25 || record->display.category == 0x28) &&
            record->groupView.id == id) {
            record->active = 0;
            record->state = 0x14;
            return;
        }
    }
}
}

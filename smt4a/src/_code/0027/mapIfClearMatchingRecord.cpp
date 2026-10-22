#include "shard/Shard0036.h"

extern "C" {
extern RecHolder* g_mapIf;

void mapIfClearMatchingRecord(s32 id)
{
    RecHolder* holder = g_mapIf;
    for (s32 index = 0; index < 0x80; ++index) {
        Rec194* record = &holder->recs[index];
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

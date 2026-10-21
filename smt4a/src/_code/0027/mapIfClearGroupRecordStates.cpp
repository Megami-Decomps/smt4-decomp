#include "shard/Shard0036.h"

extern "C" RecHolder* g_mapIf;

// Clear the state of each active interface record belonging to the requested group.
extern "C" void mapIfClearGroupRecordStates(s32 id)
{
    RecHolder* holder = g_mapIf;
    if (holder == NULL) {
        return;
    }
    for (s32 i = 0; i < 0x80; ++i) {
        Rec194* record = &holder->recs[i];
        if (record->active != 0 && record->groupView.id == id) {
            record->state = 0;
        }
    }
}

#include "common.h"

struct NpcRoomEntry {
    s16 value;          // 0x00
    u8 unk02[0x0E];     // 0x02
};

struct NpcRoom {
    u8 unk00[0x64];             // 0x00
    NpcRoomEntry entries[1];    // 0x64; entries have a 0x10-byte stride
};

extern "C" {
extern NpcRoom* g_npcRoom;

s32 npcRoomGetEntryValue(s32 entryIndex)
{
    NpcRoom* room = g_npcRoom;
    if (room == NULL) {
        return 0;
    }
    return room->entries[entryIndex].value;
}

} /* extern "C" */

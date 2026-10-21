#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern NpcRoomState *g_npcRoom;
extern void FUN_0026dcd4(u32 kind);

/* Selects an NPC-room entry, or activates the default room when no entry is supplied. */
void npcRoomSelectEntry(const u16 *entry)
{
    if (entry != NULL) {
        FUN_0026dcd4(*entry);
        g_npcRoom->active = 0;
    } else {
        FUN_0026dcd4(0);
        g_npcRoom->active = 1;
    }
}

} /* extern "C" */

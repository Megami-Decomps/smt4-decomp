#include "npc_room/NpcRoom.h"

extern "C" {

extern NpcRoom *g_npcRoom;
void npcRoomCreate(u32 room);

/* Opens the NPC room of `entry`, or room 0 as the default room when there is no entry. */
void npcRoomSelectEntry(const u16 *entry)
{
    if (entry != NULL) {
        npcRoomCreate(*entry);
        g_npcRoom->defaultRoom = 0;
    } else {
        npcRoomCreate(0);
        g_npcRoom->defaultRoom = 1;
    }
}

} /* extern "C" */

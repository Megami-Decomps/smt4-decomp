#include "npc_room/NpcRoom.h"

extern "C" {

extern NpcRoom *g_npcRoom;

/* True when there is no room or it has finished. */
bool npcRoomIsDone(void)
{
    s32 state = 0;

    if (g_npcRoom != NULL) {
        state = g_npcRoom->state;
    }
    return g_npcRoom == NULL || state == NPC_ROOM_STATE_DONE;
}

} /* extern "C" */

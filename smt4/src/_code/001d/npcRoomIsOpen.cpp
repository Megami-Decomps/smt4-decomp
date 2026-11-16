#include "npc_room/NpcRoom.h"

extern "C" {

extern NpcRoom *g_npcRoom;

/* True when `room` is missing or has finished. */
static __inline bool npcRoomIsClosed(NpcRoom *room)
{
    bool closed = true;

    if (room != NULL && room->state != NPC_ROOM_STATE_DONE) {
        closed = false;
    }
    return closed;
}

/* Whether the NPC room exists and is still open. */
bool npcRoomIsOpen(void)
{
    return !npcRoomIsClosed(g_npcRoom);
}

} /* extern "C" */

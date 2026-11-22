#include "npc_room/NpcRoom.h"
extern "C" {
extern NpcRoomA* g_npcRoom;
s32 gameSaveTestFlag(u16, u8);

// Tests whether an occupied room slot still has pending work.
u32 FUN_001691a8(s32 slot)
{
    NpcRoomA* room = g_npcRoom;
    if (room != NULL && slot >= 0 && slot < room->occupantCount && slot < NPC_ROOM_JOBS) {
        NpcRoomOccupantA* occupant = room->occupants[slot];
        if (occupant == NULL) {
            return 0;
        }
        if (gameSaveTestFlag(occupant->id, occupant->kind) == 0) {
            if (room->progress[slot].delayElapsed >= room->progress[slot].delay &&
                room->progress[slot].fadeStep >= 5) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
}

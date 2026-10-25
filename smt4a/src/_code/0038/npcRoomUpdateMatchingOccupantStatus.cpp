#include "npc_room/NpcRoom.h"

extern "C" {
extern NpcRoomA *g_npcRoom;
s32 scrGetArg(u32 index);
bool gameSaveTestFlag(u32 id, u8 kind);
void saveWorkClearFlagMask(u32 id, u8 kind);

u32 npcRoomUpdateMatchingOccupantStatus()
{
    s32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 status = 0;
    if (!gameSaveTestFlag(id, (u8)kind)) {
        status = 5;
    }
    saveWorkClearFlagMask(id, (u8)kind);
    if (g_npcRoom) {
        for (s32 index = 0; index < NPC_ROOM_JOBS; ++index) {
            NpcRoomOccupantA *occupant = g_npcRoom->occupants[index];
            if (occupant->id == id && occupant->kind == kind) {
                g_npcRoom->progress[index].unk08 = status;
                break;
            }
        }
    }
    return 1;
}
}

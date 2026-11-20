#include "npc_room/NpcRoomDebug.h"

extern "C" {
void npcRoomCreate(u32 roomId);
void titleSetSlotValueState2(s32 screen, s32 enabled);
void asdMemFree(void *);
void jobStop(u32 job, s32 result);
s32 npcRoomIsDone(void);
s32 padButtonRepeat(u32 button);
s32 padButtonIsPressed(u32 button);

/* Lets the pad pick a room id and opens that room, then restores both screens when the room is
 * done and closes the menu. */
s32 npcRoomDebugSelectRoomUpdate(u32 process)
{
    NpcRoomDebug *menu = g_npcRoomDebug;

    switch (menu->state) {
    case NPC_ROOM_DEBUG_SELECT:
        /* buttons 3 and 4 step the id up and down, button 0 opens the room */
        if (padButtonRepeat(3) && menu->roomId < NPC_ROOM_DEBUG_LAST_ROOM)
            ++menu->roomId;
        if (padButtonRepeat(4) && menu->roomId != 0)
            --menu->roomId;
        if (padButtonIsPressed(0)) {
            npcRoomCreate(menu->roomId);
            ++menu->state;
        }
        break;
    case NPC_ROOM_DEBUG_IN_ROOM:
        if (npcRoomIsDone()) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            ++menu->state;
        }
        break;
    case NPC_ROOM_DEBUG_CLOSE:
        if (menu != NULL) {
            jobStop(menu->job, 0);
            asdMemFree(menu);
            g_npcRoomDebug = NULL;
        }
        break;
    }
    return 0;
}

} /* extern "C" */

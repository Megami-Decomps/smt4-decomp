#include "npc_room/NpcRoom.h"

extern "C" {

void FUN_00290f48(s32 arg);
void FUN_002917b8(void);
void FUN_00291944(void);
void FUN_0029c3b0(s32 arg);
void FUN_002a46d8(s32 arg);
void scrScriptProcessDestroy(void *process);
void FUN_002ae898(s32 arg, u32 value);
void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void FUN_00323f40(void);

extern NpcRoom *g_npcRoom;

/* Destroy callback of the NPC room: stops its jobs, frees its blocks and the room itself. */
void npcRoomDestroy(void)
{
    NpcRoom *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        FUN_00323f40();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            FUN_0029c3b0(0xF);
            FUN_00290f48(0x3C);
        }
        FUN_002ae898(2, room->unk102);
        for (i = 0; i < NPC_ROOM_JOBS; i++) {
            if (room->jobUsed[i] != 0) {
                jobStop(room->jobs[i], 0);
            }
        }
        scrScriptProcessDestroy(room->processA);
        scrScriptProcessDestroy(room->processB);
        asdMemFree(room->dataB);
        asdMemFree(room->dataA);
        jobStop(room->job, 0);
        asdMemFree(room);
        g_npcRoom = NULL;
        FUN_002a46d8(0x35);
        FUN_002a46d8(0x1A);
        FUN_002917b8();
        FUN_00291944();
    }
}

} /* extern "C" */

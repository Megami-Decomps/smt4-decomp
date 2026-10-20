#include "npc_room/NpcRoom.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_0019a7f4(s32 arg, u32 value);
void scrScriptProcessDestroy(void *process);
void FUN_001add24(s32 arg);
void FUN_0021c354(s32 arg);
void FUN_0035b304(void);
void FUN_0037b450(void);
void FUN_003c3e14(void);
void FUN_003d2d6c(s32 arg);

extern NpcRoom *g_npcRoom;

/* Destroy callback of the NPC room: stops its jobs, frees its blocks and the room itself. */
void npcRoomDestroy(void)
{
    NpcRoom *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        FUN_003c3e14();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            FUN_003d2d6c(0xF);
            FUN_0021c354(0x3C);
        }
        FUN_0019a7f4(0, room->unk102);
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
        FUN_001add24(0x1A);
        FUN_0037b450();
        FUN_0035b304();
    }
}

} /* extern "C" */

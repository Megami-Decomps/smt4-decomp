#include "npc_room/NpcRoom.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void asdTMTexTableReleaseNode(s32 arg, u32 value);
void scrScriptProcessDestroy(void *process);
void dataTableFree(s32 arg);
void bgmFadeOut(s32 arg);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void FUN_003c3e14(void);
void soundChannelStopAll(s32 arg);

extern NpcRoom *g_npcRoom;

/* Destroy callback of the NPC room: stops its jobs, frees its blocks and the room itself. */
void npcRoomDestroy(void)
{
    NpcRoom *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        FUN_003c3e14();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            soundChannelStopAll(0xF);
            bgmFadeOut(0x3C);
        }
        asdTMTexTableReleaseNode(0, room->unk102);
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
        dataTableFree(0x1A);
        campButtonHelpRelease();
        campCommonBgRelease();
    }
}

} /* extern "C" */

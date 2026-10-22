#include "npc_room/NpcRoom.h"

extern "C" {

void bgmFadeOut(s32 arg);
void buttonHelpRelease(void);
void uiFadeRelease(void);
void soundChannelStopAll(s32 arg);
void fileSlotFree(s32 arg);
void scrScriptProcessDestroy(void *process);
void asdTMTexTableReleaseNode(s32 arg, u32 value);
void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void messageMainClearBannerRequest(void);

extern NpcRoom *g_npcRoom;

/* Destroy callback of the NPC room: stops its jobs, frees its blocks and the room itself. */
void npcRoomDestroy(void)
{
    NpcRoom *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        messageMainClearBannerRequest();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            soundChannelStopAll(0xF);
            bgmFadeOut(0x3C);
        }
        asdTMTexTableReleaseNode(2, room->unk102);
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
        fileSlotFree(0x35);
        fileSlotFree(0x1A);
        buttonHelpRelease();
        uiFadeRelease();
    }
}

} /* extern "C" */

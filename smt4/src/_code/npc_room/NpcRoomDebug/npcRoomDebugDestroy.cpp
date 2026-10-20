#include "npc_room/NpcRoomDebug.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);

extern NpcRoomDebug *g_npcRoomDebug;

/* Destroys the debug menu: stops its job and frees its block. */
void npcRoomDebugDestroy(void)
{
    NpcRoomDebug *debug = g_npcRoomDebug;

    if (g_npcRoomDebug != NULL) {
        jobStop(g_npcRoomDebug->job, 0);
        asdMemFree(debug);
        g_npcRoomDebug = NULL;
    }
}

} /* extern "C" */

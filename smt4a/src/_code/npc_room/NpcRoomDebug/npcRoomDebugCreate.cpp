#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct NpcRoomDebug {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} NpcRoomDebug;

typedef void (*NpcRoomDebugCallback)(void *);

extern NpcRoomDebug *g_npcRoomDebug;

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 a, s32 b, NpcRoomDebugCallback calc, NpcRoomDebugCallback exit, void *work);
void taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, NpcRoomDebugCallback draw, void *c, void *d, u32 process);
void FUN_002a4b9c(void *work);
void npcRoomDebugDrawStartId(void *work);

/* Create the NPC room debug block and start its calc process and draw task. */
void npcRoomDebugCreate(void)
{
    NpcRoomDebug *debug;

    if (g_npcRoomDebug == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\npc_room\\NpcRoomDebug.cpp", 84);
        g_npcRoomDebug = (NpcRoomDebug *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(NpcRoomDebug), 1);
    }
    debug = g_npcRoomDebug;
    debug->process = 0;
    debug->unk04 = 0;
    debug->unk08 = 0;
    debug->process = asdProcessCreateSimple("NpcRoomDebug Calc", 4, 0, 0, FUN_002a4b9c, NULL, NULL);
    taskCreateDraw("NpcRoomDebug UDraw", 117, 0, 0, npcRoomDebugDrawStartId, NULL, NULL, debug->process);
}

} /* extern "C" */

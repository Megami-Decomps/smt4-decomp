#include "npc_room/NpcRoomDebug.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

// The three handles extend beyond the public debug-work prefix.
struct NpcRoomDebugWorkView {
    u32 process;
    u32 unk04;
    u32 unk08;
};

extern "C" {
extern NpcRoomDebug *g_npcRoomDebug;
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
u32 taskCreateDraw(const char *name, u32 priority, u32, u32, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, u32 parent);
void FUN_001ed6ac(u32 handle);
void npcRoomDebugDrawStartId(u32 handle);

// Create the NPC-room debug process and its drawing task.
void npcRoomDebugCreateTask()
{
    if (g_npcRoomDebug == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\npc_room\\NpcRoomDebug.cpp", 84);
        g_npcRoomDebug = (NpcRoomDebug *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcRoomDebugWorkView), 1);
    }
    NpcRoomDebugWorkView *work = (NpcRoomDebugWorkView *)g_npcRoomDebug;
    work->process = 0;
    work->unk04 = 0;
    work->unk08 = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("NpcRoomDebug Calc"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001ed6ac), NULL, NULL);
    taskCreateDraw("NpcRoomDebug UDraw", 0x73, 0, 0, npcRoomDebugDrawStartId, NULL, NULL, work->process);
}
}

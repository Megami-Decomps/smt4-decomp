/* NON_MATCHING: retail uses ldr r0, [pc, #28] where the compiled block uses ldr r0, [pc, #24]. */
#include "common.h"

struct NpcRoom {
    u8 unk00[0xF0]; // 0x00
    s32 roomType;   // 0xF0
};

extern "C" {
extern NpcRoom* g_npcRoom;

u8 FUN_00284d94(void)
{
    return !(g_npcRoom == NULL || g_npcRoom->roomType == 7);
}
}

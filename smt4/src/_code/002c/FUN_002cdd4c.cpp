#include "common.h"

struct NpcRoomDebugView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
};

extern "C" NpcRoomDebugView *g_npcRoomDebug;

extern "C" s32 FUN_002cdd4c(void)
{
    if (g_npcRoomDebug == NULL) {
        return 0;
    }
    if (g_npcRoomDebug->state == 2) {
        return 0;
    }
    return 1;
}

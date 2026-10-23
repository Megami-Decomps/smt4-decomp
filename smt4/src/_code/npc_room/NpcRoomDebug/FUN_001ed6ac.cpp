#include "npc_room/NpcRoomDebug.h"
#include <stddef.h>

extern "C" {
void FUN_0026dcd4(u32 roomId);
void FUN_002a03d8(s32 screen, s32 enabled);
void asdMemFree(void *);
void jobStop(u32 job, s32 result);
s32 npcRoomIsDone(void);
s32 padIsButtonRepeat(u32 button);
s32 padIsButtonPressed(u32 button);

// Select a room to preview, then restore both screens when the room exits.
u32 FUN_001ed6ac(void)
{
    // The selection fields lie beyond the shared debug job's currently known extent.
    struct DebugMenuView {
        NpcRoomDebug base;
        s32 state; // 0x04
        u16 roomId; // 0x08
    };
    typedef char LayoutCheck[offsetof(DebugMenuView, state) == 4 &&
        offsetof(DebugMenuView, roomId) == 8 ? 1 : -1];
    extern DebugMenuView *g_npcRoomDebug;
    DebugMenuView *menu = g_npcRoomDebug;
    switch (menu->state) {
    case 0:
        if (padIsButtonRepeat(3) && menu->roomId < 999)
            ++menu->roomId;
        if (padIsButtonRepeat(4) && menu->roomId != 0)
            --menu->roomId;
        if (padIsButtonPressed(0)) {
            FUN_0026dcd4(menu->roomId);
            ++menu->state;
        }
        break;
    case 1:
        if (npcRoomIsDone()) {
            FUN_002a03d8(0, 1);
            FUN_002a03d8(1, 1);
            ++menu->state;
        }
        break;
    case 2:
        if (menu != NULL) {
            jobStop(menu->base.job, 0);
            asdMemFree(menu);
            g_npcRoomDebug = NULL;
        }
        break;
    }
    return 0;
}
}

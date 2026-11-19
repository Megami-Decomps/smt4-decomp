#include <stdio.h>
#include "shard/W5_W5Match2_RoomDebugWork.h"
#include "text/DebugText.h"

extern "C" {

extern RoomDebugWork *g_npcRoomDebug;

/* Show the starting room ID while the debug selector is idle. */
s32 npcRoomDebugDrawStartId(void)
{
    char text[128];
    if (g_npcRoomDebug->state == 0) {
        /* Shift-JIS: starting location ID. */
        sprintf(text, "\x8b\x4e\x93\xae\x82\xb7\x82\xe9\x8f\xea\x8f\x8a\x49\x44\x81\x40\x81\x81\x81\x40%d", g_npcRoomDebug->room);
        debugDrawText(0xFFFFFFFF, 8.0f, 8.0f, 1.0f, text);
    }
    return 0;
}

}

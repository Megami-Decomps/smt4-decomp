/* NON_MATCHING: armcc schedules the global load before push and the scale load before the text pointer. */
#include <stdio.h>
#include "shard/W5_W5Match2_RoomDebugWork.h"

extern "C" {

extern RoomDebugWork *g_npcRoomDebug;
void debugDrawText(u32 color, const char *text, f32 x, f32 y, f32 scale);

/* Show the starting room ID while the debug selector is idle. */
s32 npcRoomDebugDrawStartId(void)
{
    char text[128];
    if (g_npcRoomDebug->state == 0) {
        /* Shift-JIS: starting location ID. */
        sprintf(text, "\x8b\x4e\x93\xae\x82\xb7\x82\xe9\x8f\xea\x8f\x8a\x49\x44\x81\x40\x81\x81\x81\x40%d", g_npcRoomDebug->room);
        debugDrawText(0xFFFFFFFF, text, 8.0f, 8.0f, 1.0f);
    }
    return 0;
}

}

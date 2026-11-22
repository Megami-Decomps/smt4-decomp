#include "gfx/PulseAnimation.h"
#include "npc_room/NpcRoom.h"
extern "C" {
extern NpcRoomA *g_npcRoom;

/* Returns room slot `slot`'s opacity in its repeating fade-in/hold/fade-out/hold cycle, each slot three ticks behind the previous one. */
f32 npcRoomSlotFadeOpacity(u32 slot)
{
    NpcRoomA *room = g_npcRoom;
    if (room == NULL || slot >= 3)
        return 0.0f;
    s32 durations[4] = {2, 9, 5, 13}; /* fade in, hold, fade out, hold */
    s32 boundaries[4] = {0, 0, 0, 0};
    for (s32 phase = 0; phase < 4; ++phase) {
        for (s32 i = 0; i <= phase; ++i)
            boundaries[phase] += durations[i];
    }
    s32 time = room->frame - (s32)slot * 3;
    if (time < 0)
        time = 0;
    time %= boundaries[3];
    f32 opacity = 0.0f;
    if (time < boundaries[0])
        opacity = mathInterpolateTimed(durations[0], time, 0.0f, 1.0f);
    else if (time < boundaries[1])
        opacity = 1.0f;
    else if (time < boundaries[2])
        opacity = mathInterpolateTimed(durations[2], time - boundaries[1], 1.0f, 0.0f);
    return opacity;
}
} /* extern "C" */

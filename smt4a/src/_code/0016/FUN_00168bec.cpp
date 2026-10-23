/* NON_MATCHING: retail uses unrolled prefix-sum internals to build phase boundaries. */
#include "npc_room/NpcRoom.h"
extern "C" {
extern NpcRoomA *g_npcRoom;
f32 mathInterpolateTimed(s32 duration, s32 time, f32 start, f32 end);
extern const s32 DAT_005331a8[4];

// Offset each room slot's repeating fade-in/hold/fade-out/hold cycle by three ticks.
f32 FUN_00168bec(u32 slot)
{
    if (g_npcRoom == NULL || slot >= 3)
        return 0.0f;
    // The animation clock is immediately past the shared room prefix; do not grow it.
    struct RoomClockView { u8 prefix[0x168]; s32 frame; };
    typedef char RoomClockOffset[offsetof(RoomClockView, frame) == 0x168 ? 1 : -1];
    s32 durations[4];
    for (s32 phase = 0; phase < 4; ++phase)
        durations[phase] = DAT_005331a8[phase];
    s32 boundaries[4] = {0};
    s32 total = 0;
    for (s32 phase = 0; phase < 4; ++phase) {
        total += durations[phase];
        boundaries[phase] = total;
    }
    s32 time = ((RoomClockView *)g_npcRoom)->frame - (s32)slot * 3;
    if (time < 0)
        time = 0;
    time %= boundaries[3];
    if (time < boundaries[0])
        return mathInterpolateTimed(durations[0], time, 0.0f, 1.0f);
    if (time < boundaries[1])
        return 1.0f;
    if (time >= boundaries[2])
        return 0.0f;
    return mathInterpolateTimed(durations[2], time - boundaries[1], 1.0f, 0.0f);
}
}

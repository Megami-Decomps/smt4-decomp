#include "map/mapDepart.h"

struct PendingWarpState {
    u8 unk000[0x284];
    u8 requested; // 0x284
    u8 unk285[0x97];
    s32 map; // 0x31c
    s32 section; // 0x320
    f32 x; // 0x324
    f32 y; // 0x328
    f32 z; // 0x32c
    f32 heading; // 0x330
    f32 targetHeading; // 0x334
};

extern "C" {
extern GameState g_gameState;
s32 scrGetArg(s32 index);
void FUN_00275e4c(void);

// Handle the special script warp to map101, section5 and its fixed entry pose.
u32 scrCommRequestSpecialMapWarp(s32 argument)
{
    if (scrGetArg(argument) == 0x164f) {
        FUN_00275e4c();
        PendingWarpState *warp = (PendingWarpState *)&g_gameState;
        warp->map = 101;
        warp->section = 5;
        warp->heading = 180.0f;
        warp->targetHeading = 180.0f;
        warp->x = -12000.0f;
        warp->y = 107.0f;
        warp->z = 2958.0f;
        warp->requested = 1;
    }
    return 1;
}
}

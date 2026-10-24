#include "common.h"

/* The game state block as seen by this command: four floats from 0x100. */
struct GameStateAngleView {
    u8 unk000[0x100];
    f32 values[4];
};

/* The map view: the two corner points whose direction is measured. */
struct LmapViewPoints {
    u8 unk00[0x68];
    f32 fromX;
    f32 unk6c;
    f32 fromY;
    f32 toX;
    f32 unk78;
    f32 toY;
};

extern "C" {
extern GameStateAngleView g_gameState;
extern LmapViewPoints *g_lmapView;
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
f32 FUN_0050d8e4(f32 x, f32 y);

/* Script command: sets the result to one of the game state's float values, or to the map view's direction in degrees. */
s32 FUN_003a7348(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult((s32)g_gameState.values[0]);
        break;
    case 1:
        scrSetResult((s32)g_gameState.values[1]);
        break;
    case 2:
        scrSetResult((s32)g_gameState.values[2]);
        break;
    case 3:
    {
        f32 dx = g_lmapView->toX - g_lmapView->fromX;
        f32 dy = g_lmapView->toY - g_lmapView->fromY;
        scrSetResult((s32)(FUN_0050d8e4(dx, dy) * (180.0f / 3.14f)));
        break;
    }
    case 4:
        scrSetResult(500);
        break;
    case 5:
        scrSetResult((s32)g_gameState.values[3]);
        break;
    }
    return 1;
}
}

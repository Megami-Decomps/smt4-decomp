/* NON_MATCHING: compiler combines source-coordinate loads into VLDM and schedules interpolation arithmetic in different VFP registers. */
#include "map/NavigationInterpolation.h"
#include "map/mapDepart.h"
#include "shard/FUN_002319c0.h"

extern "C" {
extern GameState g_gameState;
void FUN_0039b648(NavigationInterpolation *state);
u32 naviUpdateDragCapture(NavigationInterpolation *state);
void NaviMain_SetCursorPos(void *cursor, const NavigationPoint *position);

// Advance the navigation cursor transition unless a map-mode or input lock suspends it.
u32 FUN_0039ad14(NavigationInterpolation *state)
{
    if ((state->flags & 0x1000) != 0 ||
        (g_gameState.unk000 == 19 && (g_gameState.unk004Value == 6 ||
         g_gameState.unk004Value == 7 || g_gameState.unk004Value == 8))) {
        return 0;
    }
    if ((state->flags & 0x10) != 0) {
        ++state->elapsed;
        if ((FUN_002319c0() != 0 && g_gameState.unk18 == 0) || state->elapsed > 15) {
            state->flags &= ~0x10;
        } else {
            NavigationPoint position;
            position.x = (state->target.x - state->source.x) * (f32)state->elapsed * (1.0f / 15.0f);
            position.y = (state->target.y - state->source.y) * (f32)state->elapsed * (1.0f / 15.0f);
            position.x += state->source.x;
            position.y += state->source.y;
            NaviMain_SetCursorPos(state->cursorData, &position);
        }
    }
    FUN_0039b648(state);
    naviUpdateDragCapture(state);
    return 0;
}
}

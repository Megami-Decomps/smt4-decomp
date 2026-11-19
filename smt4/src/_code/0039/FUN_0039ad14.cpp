/* NON_MATCHING: the deltas are now loaded separately (no VLDM) in retail's y-then-x order; the elapsed conversions and products still land in different VFP registers. */
#include "map/NavigationInterpolation.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {
void FUN_0039b648(NavigationInterpolation *state);
u32 naviUpdateDragCapture(NavigationInterpolation *state);
void NaviMain_SetCursorPos(void *cursor, const NavigationPoint *position);

// Advance the navigation cursor transition unless a map-mode or input lock suspends it.
u32 FUN_0039ad14(NavigationInterpolation *state)
{
    if ((state->flags & 0x1000) != 0 ||
        (g_gameState.mapId == 19 && (g_gameState.areaId == 6 ||
         g_gameState.areaId == 7 || g_gameState.areaId == 8))) {
        return 0;
    }
    if ((state->flags & 0x10) != 0) {
        ++state->elapsed;
        if ((setFullScreenRect() != 0 && g_gameState.inputBlocked == 0) || state->elapsed > 15) {
            state->flags &= ~0x10;
        } else {
            NavigationPoint position;
            f32 dy = state->target.y - state->source.y;
            f32 dx = state->target.x - state->source.x;
            position.x = dx * (f32)state->elapsed * (1.0f / 15.0f);
            position.y = dy * (f32)state->elapsed * (1.0f / 15.0f);
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

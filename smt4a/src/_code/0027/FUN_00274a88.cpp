#include "map/mapDepart.h"
#include "map/mapIf.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

extern MapIfGlobalsA g_mapIf;
extern GameStateA g_gameState;

f32 FUN_001f3f34(f32 from, f32 to, f32 duration, f32 time);
f32 FUN_0016242c(f32 from, f32 to, f32 duration, f32 time);

/* Steps the map interface's slide animation: a state machine that eases the interface in and out
 * (modes 0-5) while the scene-entry fade is running, and counts frames while the fade is mostly done. */
void FUN_00274a88(void)
{
    MapIfStateA *state = g_mapIf.state;
    FlagWorkBanks *flags = gameFlagsGetBlock();

    switch (state->fadeMode) {
    case 0:
        state->unkCD20 = -40.0f;
        state->unkCD24 = 195.0f;
        if (g_gameState.inputBlocked == 0 && flags->mapFade.active != 0) {
            state->fadeMode = 1;
            state->fadeStep = 0;
            state->fadeTimer = 0;
        }
        break;
    case 1:
        state->fadeProgress = 1.0f - flags->mapFade.elapsed / flags->mapFade.duration;
        state->unkCD20 = FUN_001f3f34(-40.0f, 10.0f, 6.0f, (f32)state->fadeStep);
        if (++state->fadeStep > 6) {
            state->fadeMode = 2;
            state->fadeStep = 0;
            state->fadeTimer = 0;
        }
        break;
    case 2:
        state->fadeProgress = 1.0f - flags->mapFade.elapsed / flags->mapFade.duration;
        if (flags->mapFade.active == 0) {
            state->fadeMode = 3;
            state->fadeStep = 0;
        }
        if (g_gameState.inputBlocked != 0) {
            state->fadeMode = 4;
            state->fadeStep = 0;
        }
        break;
    case 3:
        state->unkCD20 = FUN_0016242c(10.0f, -40.0f, 6.0f, (f32)state->fadeStep);
        if (++state->fadeStep > 6) {
            state->fadeMode = 0;
            state->fadeStep = 0;
        }
        break;
    case 4:
        state->unkCD20 = FUN_0016242c(10.0f, -40.0f, 6.0f, (f32)state->fadeStep);
        if (++state->fadeStep > 6) {
            state->fadeMode = 5;
            state->fadeStep = 0;
        }
        break;
    case 5:
        state->fadeProgress = 1.0f - flags->mapFade.elapsed / flags->mapFade.duration;
        if (g_gameState.inputBlocked == 0) {
            state->fadeMode = 1;
            state->fadeStep = 0;
        }
        break;
    }
    if (state->fadeProgressBits <= 0x3EAA7EFA) {
        if (++state->fadeTimer > 40) {
            state->fadeTimer = 10;
        }
    }
}

} /* extern "C" */

/* NON_MATCHING: 105 lines. The half-turn runs at `step` = 15.0f until it is within half a step of its target
 * (retail reloads the step register and compares with vcmpe) and the heading is wrapped only when no turn is
 * running; retail still lays out the arrival before the step, stores elapsed after mathGetShortestAngleDelta (whose
 * arguments are the stored turnStart/turnTarget pair, vstmia), and keeps the button state in other registers. */
#include "map/LmapMainGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {

/* The map camera (only the fields touched here). */

s32 inputIsQuestMenuPressed(void);
s32 padIsButtonPressed(u32 button);
f32 FUN_0027eee0(f32 angle, f32 target);
f32 mathGetShortestAngleDelta(f32 angle, f32 target);

/* Turns the map camera: shoulder buttons rotate it by 3 degrees a frame, pressing both (or the
 * quest menu button) starts a half-turn that then runs by 15 degrees a frame. */
void mapCameraUpdateTurn(void)
{
    LmapMainState *state = g_lmapMainState;
    LmapView *camera = g_mapCamera;
    s32 left = 0;
    s32 right = 0;
    s32 start = 0;
    f32 step = 3.0f;

    camera->heading = state->angle;
    if (state->angleReset != 0) {
        camera->turning = 0;
        camera->turnHeld = 0;
        camera->cooldown = 10;
        camera->elapsed = 0;
        camera->turnStart = 0.0f;
        camera->turnTarget = 0.0f;
        camera->turnDirection = 1.0f;
    }
    if (camera->cooldown > 0) {
        camera->cooldown--;
    }
    if (g_gameState.inputBlocked == 0 && g_gameState.owner == NULL) {
        if (camera->turning == 0) {
            if (camera->turnHeld != 0 && slotIsActive(8) == 0 && slotIsActive(7) == 0) {
                g_mapCamera->turnHeld = 0;
            }
            if (g_mapCamera->cooldown <= 6) {
                if (slotIsActive(8) != 0) {
                    left = 1;
                }
                if (slotIsActive(7) != 0) {
                    right = 1;
                }
                if (g_mapCamera->cooldown == 0
                    && (inputIsQuestMenuPressed() != 0
                        || (slotIsActive(8) != 0 && slotIsActive(7) != 0 && padIsButtonPressed(8) == 0
                            && padIsButtonPressed(7) == 0 && g_mapCamera->turnHeld == 0))) {
                    left = 0;
                    right = 0;
                    start = 1;
                }
            }
        }
    }
    camera = g_mapCamera;
    if (camera->turning == 0) {
        if (start != 0) {
            camera->turning = 1;
            camera->values[0] = 0.0f;
            camera->values[1] = 0.0f;
            camera->turnStart = camera->heading;
            camera->turnTarget = 180.0f;
            g_mapCamera->elapsed = 0;
            if (mathGetShortestAngleDelta(camera->heading, 180.0f) < 0.0f) {
                g_mapCamera->turnDirection = -1.0f;
            } else {
                g_mapCamera->turnDirection = 1.0f;
            }
        }
    }
    if (g_mapCamera->turning == 0) {
        if (left != 0) {
            g_mapCamera->heading = g_mapCamera->heading + step;
        } else if (right != 0) {
            g_mapCamera->heading = g_mapCamera->heading - step;
        }
    } else {
        step = 15.0f;
        f32 remaining = FUN_0027eee0(g_mapCamera->heading, g_mapCamera->turnTarget);

        camera = g_mapCamera;
        if (remaining > step + 0.5f) {
            if (camera->turnDirection < 0.0f) {
                camera->heading = camera->heading - step;
            } else {
                camera->heading = camera->heading + step;
            }
        } else {
            camera->heading = camera->turnTarget;
            camera->turning = 0;
            camera->cooldown = 10;
            camera->turnHeld = 1;
        }
    }
    if (g_mapCamera->turning == 0) {
        camera = g_mapCamera;
        if (camera->heading < 0.0f) {
            camera->heading = camera->heading + 360.0f;
        }
        if (camera->heading >= 360.0f) {
            camera->heading = camera->heading - 360.0f;
        }
    }
    state->angle = g_mapCamera->heading;
}

}

/* NON_MATCHING: the button state is kept in different registers and the turn start / hold-to-rotate paths are laid out in another order; the camera turn behaviour is the same. */
#include "common.h"

extern "C" {

/* The map camera (only the fields touched here). */
typedef struct MapCameraTurn {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ f32 angle;              /* heading in degrees */
    /* 0x01C */ u8 unk01c[0x94];
    /* 0x0B0 */ u8 turning;             /* a half-turn is in progress */
    /* 0x0B1 */ u8 held;                /* both shoulder buttons are still held after a turn */
    /* 0x0B2 */ s16 cooldown;
    /* 0x0B4 */ s16 unk0b4;
    /* 0x0B6 */ u8 unk0b6[2];
    /* 0x0B8 */ f32 turnStart;
    /* 0x0BC */ f32 turnTarget;
    /* 0x0C0 */ f32 turnDirection;
    /* 0x0C4 */ u8 unk0c4[0x148];
    /* 0x20C */ f32 unk20c;
    /* 0x210 */ f32 unk210;
} MapCameraTurn;

/* The head of the game state: a busy flag and the active owner. */
typedef struct GameStateHead {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 busy;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void *owner;
} GameStateHead;

/* The map state's heading mirror and the reset flag. */
typedef struct MapHeadingState {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ f32 angle;
    /* 0x54 */ u8 unk54[0x40];
    /* 0x94 */ u8 reset;
} MapHeadingState;

extern MapHeadingState *g_lmapMainState;
extern MapCameraTurn *DAT_004474f4;
extern GameStateHead g_gameState;

s32 inputIsQuestMenuPressed(void);
s32 padIsButtonPressed(u32 button);
s32 FUN_002c15fc(u32 button);
f32 FUN_0027eee0(f32 angle, f32 target);
f32 mathGetShortestAngleDelta(f32 angle, f32 target);

/* Turns the map camera: shoulder buttons rotate it by 3 degrees a frame, pressing both (or the
 * quest menu button) starts a half-turn that then runs by 15 degrees a frame. */
void FUN_0026413c(void)
{
    MapHeadingState *state = g_lmapMainState;
    MapCameraTurn *camera = DAT_004474f4;
    s32 left = 0;
    s32 right = 0;
    s32 start = 0;
    f32 step = 3.0f;

    camera->angle = state->angle;
    if (state->reset != 0) {
        camera->turning = 0;
        camera->held = 0;
        camera->cooldown = 10;
        camera->unk0b4 = 0;
        camera->turnStart = 0.0f;
        camera->turnTarget = 0.0f;
        camera->turnDirection = 1.0f;
    }
    if (camera->cooldown > 0) {
        camera->cooldown--;
    }
    if (g_gameState.busy == 0 && g_gameState.owner == NULL) {
        if (camera->turning == 0) {
            if (camera->held != 0 && FUN_002c15fc(8) == 0 && FUN_002c15fc(7) == 0) {
                DAT_004474f4->held = 0;
            }
            if (DAT_004474f4->cooldown <= 6) {
                if (FUN_002c15fc(8) != 0) {
                    left = 1;
                }
                if (FUN_002c15fc(7) != 0) {
                    right = 1;
                }
                if (DAT_004474f4->cooldown == 0
                    && (inputIsQuestMenuPressed() != 0
                        || (FUN_002c15fc(8) != 0 && FUN_002c15fc(7) != 0 && padIsButtonPressed(8) == 0
                            && padIsButtonPressed(7) == 0 && DAT_004474f4->held == 0))) {
                    left = 0;
                    right = 0;
                    start = 1;
                }
            }
        }
    }
    camera = DAT_004474f4;
    if (camera->turning == 0) {
        if (start != 0) {
            camera->turning = 1;
            camera->unk20c = 0.0f;
            camera->unk210 = 0.0f;
            camera->turnStart = camera->angle;
            camera->turnTarget = 180.0f;
            DAT_004474f4->unk0b4 = 0;
            DAT_004474f4->turnDirection = mathGetShortestAngleDelta(camera->angle, 180.0f) < 0.0f ? -1.0f : 1.0f;
        }
    }
    if (DAT_004474f4->turning == 0) {
        if (left != 0) {
            DAT_004474f4->angle = DAT_004474f4->angle + step;
        } else if (right != 0) {
            DAT_004474f4->angle = DAT_004474f4->angle - step;
        }
    } else {
        f32 remaining = FUN_0027eee0(DAT_004474f4->angle, DAT_004474f4->turnTarget);

        camera = DAT_004474f4;
        if (remaining <= 15.5f) {
            camera->angle = camera->turnTarget;
            camera->turning = 0;
            camera->cooldown = 10;
            camera->held = 1;
        } else if (camera->turnDirection >= 0.0f) {
            camera->angle = camera->angle + 15.0f;
        } else {
            camera->angle = camera->angle - 15.0f;
        }
        if (DAT_004474f4->turning != 0) {
            state->angle = DAT_004474f4->angle;
            return;
        }
    }
    camera = DAT_004474f4;
    if (camera->angle < 0.0f) {
        camera->angle = camera->angle + 360.0f;
    }
    if (camera->angle >= 360.0f) {
        camera->angle = camera->angle - 360.0f;
    }
    state->angle = DAT_004474f4->angle;
}

}

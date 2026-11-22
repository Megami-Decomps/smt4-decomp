/* NON_MATCHING: 189 lines: the early-out flags are g_gameState fields reached from one +0x300 base as retail does; retail keeps a 20-byte frame and one fewer saved register (no sl), loads the run speed as a word for the 1.0 clamp and keeps 60.0 in s17 for the upper clamp; register allocation differs throughout. */
#include "gamedata/MapSaveBlock.h"
#include "map/LmapGlobals.h"
#include "util/TrigF32.h"
#include "code/Code0025.h"
#include "game/GameState.h"

// Player controller: only the members this movement update uses.
struct PlayerController {
    u8 unk00[0x3c];
    f32 speed;              // 0x3c: current run speed, builds up while the stick is held
    u8 unk40[0x10];
    f32 cameraYaw;          // 0x50
    u8 unk54[0xc0 - 0x54];
    s32 moving;             // 0xc0
};

extern "C" {


void padGetNormalizedAnalogStick(f32* stickX, f32* stickY, s32 arg);
void mapCameraUpdateTurn(void);
f32 __hardfp_atan2f(f32 y, f32 x);
s32 FUN_002ed094(MapVector* candidate, MapVector* previous);

// Moves the player on the field from the analog stick: accelerates while held,
// turns to the stick direction and advances in one or two collision-checked steps.
void fieldPlayerMoveByStick(PlayerController* player)
{
    MapSaveBlock *block = gameGetMapBlock();
    f32 speedScale = 1.0f;
    s32 blocked = 0;
    if (g_gameState.suppressStep != 0) {
        block->moveRequest = 0;
        return;
    }
    if (g_gameState.inputBlocked != 0) {
        block->moveRequest = 0;
        return;
    }

    LmapScene* scene = g_lmapScene;
    MapVector start = scene->pose.position;
    scene->pose.targetPosition = start;

    f32 boost = (f32)FUN_00256540() * 0.01f;
    if (boost > 2.0f) boost = 2.0f;
    if (boost > 1.0f) speedScale = boost;

    f32 stickX, stickY;
    padGetNormalizedAnalogStick(&stickX, &stickY, 0);
    mapCameraUpdateTurn();
    player->moving = 0;
    if (stickX > -0.5f && stickX < 0.5f && stickY > -0.5f && stickY < 0.5f) {
        player->speed = player->speed * 0.5f;
        if (player->speed < 0.001f) player->speed = 0.0f;
    } else {
        f32 speed = player->speed;
        if (!(speed > 1.0f)) speed = 1.0f;
        speed = speed + speed * 0.7f;
        player->speed = speed;
        if (speed > 60.0f) speed = 60.0f;
        player->speed = speed;
        f32 heading = -(__hardfp_atan2f(stickX, stickY) * 57.29578f - player->cameraYaw);
        if (!(heading >= 0.0f)) heading += 360.0f;
        if (heading > 360.0f) heading -= 360.0f;
        g_lmapScene->pose.targetHeading = heading;
        player->moving = 1;
    }

    s32 steps = 1;
    if (player->speed > 35.0f) steps = 2;
    for (s32 i = 0; i < steps; i++) {
        scene = g_lmapScene;
        MapVector before = scene->pose.position;
        scene->pose.targetPosition = scene->pose.position;
        f32 stride = (player->speed / (f32)steps) * speedScale;
        scene->pose.targetPosition.x += libm_sinf(scene->pose.targetHeading * 0.017453292f) * stride;
        scene = g_lmapScene;
        scene->pose.targetPosition.z += libm_cosf(scene->pose.targetHeading * 0.017453292f) * stride;
        scene = g_lmapScene;
        if (g_gameState.unk3CC == 0) blocked = FUN_002ed094(&scene->pose.targetPosition, &before);
        scene = g_lmapScene;
        scene->pose.position.x = (scene->pose.targetPosition.x - scene->pose.position.x) + scene->pose.position.x;
        scene->pose.position.z = (scene->pose.targetPosition.z - scene->pose.position.z) + scene->pose.position.z;
        if (blocked != 0) break;
    }
    scene = g_lmapScene;
    scene->pose.heading = scene->pose.targetHeading;
    scene->pose.lastPosition = scene->pose.position;
    scene->pose.previousPosition = start;
}

} /* extern "C" */

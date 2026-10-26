/* NON_MATCHING: twin of smt4 FUN_002d508c; readable rewrite compiles (175 vs 165 rows); register allocation and stack frame differ */
#include "common.h"
#include "shard/W6_W6Match2_TitleCommand.h"
#include "shard/gameFlagsGetBlock.h"

struct Vec3f {
    f32 x, y, z;
};

// Field scene: the player's position and facing, current and previous frame.
struct LmapScene {
    u8 unk00[0x1c];
    Vec3f position;         // 0x1c
    Vec3f candidate;        // 0x28: position being tried this step
    Vec3f previous;         // 0x34: position at the start of the frame
    Vec3f lastPosition;     // 0x40
    f32 lastYaw;            // 0x4c
    f32 yaw;                // 0x50: facing in degrees
};

// Player controller: only the members this movement update uses.
struct PlayerController {
    u8 unk00[0x3c];
    f32 speed;              // 0x3c: current run speed, builds up while the stick is held
    u8 unk40[0x10];
    f32 cameraYaw;          // 0x50
    u8 unk54[0xc0 - 0x54];
    s32 moving;             // 0xc0
};

struct GameFlagsBlock {
    u8 unk000[0xdc8];
    s32 moveRequest;        // 0xdc8
};

extern "C" {

extern LmapScene* g_lmapScene;
extern s8 DAT_005f1614;
extern s8 DAT_005f1bc4;
extern s8 DAT_005f1c48;

void FUN_00317af8(f32* stickX, f32* stickY, s32 arg);
void FUN_0033f9f4(void);
f32 FUN_0050d8e4(f32 y, f32 x);
f32 FUN_001bc124(f32 angle);
f32 FUN_001bbf0c(f32 angle);
s32 FUN_0036d5e0(Vec3f* candidate, Vec3f* previous);

// Moves the player on the field from the analog stick: accelerates while held,
// turns to the stick direction and advances in one or two collision-checked steps.
void FUN_0033feb8(PlayerController* player)
{
    GameFlagsBlock* block = reinterpret_cast<GameFlagsBlock *>(gameFlagsGetBlock());
    f32 speedScale = 1.0f;
    s32 blocked = 0;
    if (DAT_005f1bc4 != 0 || DAT_005f1614 != 0) {
        block->moveRequest = 0;
        return;
    }

    LmapScene* scene = g_lmapScene;
    Vec3f start = scene->position;
    scene->candidate = start;

    f32 boost = (f32)FUN_0029202c() * 0.01f;
    if (boost > 2.0f) boost = 2.0f;
    if (boost > 1.0f) speedScale = boost;

    f32 stickX, stickY;
    FUN_00317af8(&stickX, &stickY, 0);
    FUN_0033f9f4();
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
        f32 heading = -(FUN_0050d8e4(stickX, stickY) * 57.29578f - player->cameraYaw);
        if (!(heading >= 0.0f)) heading += 360.0f;
        if (heading > 360.0f) heading -= 360.0f;
        g_lmapScene->yaw = heading;
        player->moving = 1;
    }

    s32 steps = 1;
    if (player->speed > 35.0f) steps = 2;
    for (s32 i = 0; i < steps; i++) {
        scene = g_lmapScene;
        Vec3f before = scene->position;
        scene->candidate = scene->position;
        f32 stride = (player->speed / (f32)steps) * speedScale;
        scene->candidate.x += FUN_001bc124(scene->yaw * 0.017453292f) * stride;
        scene = g_lmapScene;
        scene->candidate.z += FUN_001bbf0c(scene->yaw * 0.017453292f) * stride;
        scene = g_lmapScene;
        if (DAT_005f1c48 == 0) blocked = FUN_0036d5e0(&scene->candidate, &before);
        scene = g_lmapScene;
        scene->position.x = (scene->candidate.x - scene->position.x) + scene->position.x;
        scene->position.z = (scene->candidate.z - scene->position.z) + scene->position.z;
        if (blocked != 0) break;
    }
    scene = g_lmapScene;
    scene->lastYaw = scene->yaw;
    scene->lastPosition = scene->position;
    scene->previous = start;
}

} /* extern "C" */

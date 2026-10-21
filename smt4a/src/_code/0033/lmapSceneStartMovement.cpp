/* NON_MATCHING: retail hoists zero/85.0f and uses a saved register for motion4; divide scratch selection and constant scheduling differ by one row. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W5_W5Match7_SceneState.h"

struct MapMotionFlags {
    u8 unk0000[0x109c];
    u32 enabled;
    u8 unk10a0[0x488];
    f32 distance;
};
struct MapMotionActor {
    u8 unk000[0x1fc];
    f32 playbackScale;
};
struct MapMotionBinding {
    u32 unk00;
    MapMotionActor *actor;
};
struct MapMotionScene {
    u8 unk000[0x18c];
    MapMotionBinding *binding;
    u8 unk190[0x40];
    s32 state;
    u32 counter;
    u8 unk1d8[0xc];
    f32 stepSize;
    u8 unk1e8[4];
    f32 targetStep;
    u8 unk1f0[0x24];
    u8 mode;
    u8 unk215[0xf];
    u8 active;
    u8 unk225[3];
    s32 animation;
    u8 unk22c[0xc];
    s32 nextAnimation;
    u8 unk23c[4];
    f32 transition;
};

extern "C" {
u32 gameFlagIsSet(u32);
u32 FUN_002e5db4();
u32 mapHasFacingBreakableInReach();
void FUN_003fd7c0(MapMotionActor *, u32, u8, f32);
void FUN_003fd924(MapMotionActor *, u32, u8, f32, f32);

void lmapSceneStartMovement(u8 mode)
{
    const MapMotionFlags *flags = (const MapMotionFlags *)gameFlagsGetBlock();
    if (!flags->enabled) {
        return;
    }
    f32 distance = flags->distance;
    MapMotionScene *scene = (MapMotionScene *)g_lmapScene;
    scene->counter = 0;
    scene->targetStep = (f32)(s32)(distance / scene->stepSize);
    scene->active = 1;
    if (mapHasFacingBreakableInReach()) {
        scene = (MapMotionScene *)g_lmapScene;
        scene->state = 10;
        scene->mode = mode;
        if (!gameFlagIsSet(0x4c9) || FUN_002e5db4()) {
            scene = (MapMotionScene *)g_lmapScene;
            scene->animation = 4;
            scene->nextAnimation = 4;
        }
        ((MapMotionScene *)g_lmapScene)->transition = 2.0f;
        if (gameFlagIsSet(0x4c9) && !FUN_002e5db4()) {
            MapMotionActor *actor = ((MapMotionScene *)g_lmapScene)->binding->actor;
            FUN_003fd7c0(actor, 4, 2, 0.0f);
            ((MapMotionScene *)g_lmapScene)->nextAnimation = 13;
            FUN_003fd924(actor, 13, 2, 0.0f, 0.0f);
            return;
        }
    } else {
        scene = (MapMotionScene *)g_lmapScene;
        scene->state = 2;
        scene->mode = mode;
        if (!gameFlagIsSet(0x4c9) || FUN_002e5db4()) {
            scene = (MapMotionScene *)g_lmapScene;
            scene->animation = 10;
            scene->nextAnimation = 10;
        }
        ((MapMotionScene *)g_lmapScene)->transition = 0.0f;
        if (gameFlagIsSet(0x4c9) && !FUN_002e5db4()) {
            MapMotionActor *actor = ((MapMotionScene *)g_lmapScene)->binding->actor;
            actor->playbackScale = 1.0f;
            FUN_003fd7c0(actor, 5, 2, 19.0f);
            return;
        }
    }
    FUN_003fd7c0(((MapMotionScene *)g_lmapScene)->binding->actor, 0, 2, 85.0f);
}
}

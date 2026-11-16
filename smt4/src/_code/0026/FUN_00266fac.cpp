/* NON_MATCHING: only the literal-pool order differs: retail places the 1/3 scale before the g_deferredMapModels word. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

struct HudVec3 {
    f32 x, y, z;
};
struct MapHudAnimation {
    u8 unk00[0x30];
    f32 frame;
    u8 unk34[0x28];
    HudVec3 position; /* 0x5C */
    HudVec3 target; /* 0x68 */
    f32 targetFrame;
    u8 unk78[0x118];
    s32 id; /* 0x190 */
};
struct MapHudSelection {
    u8 unk000[0x16];
    s8 mode;
    u8 unk017[0x25];
    MapHudAnimation animation; /* 0x3C */
};
struct DeferredMapModelPosition {
    u8 unk00[0x1C];
    SoundActorQueuePosition position; /* 0x1C */
    u8 unk28[0x10];
};
extern "C" {
extern MapHudSelection *g_mapIf;
extern s32 g_gameState;
extern DeferredMapModelPosition *g_deferredMapModels;
}

/* A world position scaled down to the sound system's units. */
static __inline SoundActorQueuePosition soundPositionFromWorld(const SoundActorQueuePosition &world)
{
    SoundActorQueuePosition position = world;
    position.x /= 3.0f;
    position.y /= 3.0f;
    position.z /= 3.0f;
    return position;
}

/* Restart the HUD's selection animation and sound at the selected map model. */
extern "C" void FUN_00266fac(s32 mode, s32 id)
{
    MapHudSelection *hud = g_mapIf;
    MapHudAnimation *animation = &hud->animation;
    if (hud->mode == mode && animation->id == id) {
        return;
    }
    hud->mode = (s8)mode;
    if (mode != 0) {
        animation->id = id;
        if (g_gameState > 100) {
            FUN_00291e40(0x10001FD, soundPositionFromWorld(g_deferredMapModels[id].position));
        }
        animation->position.x = 0.0f;
        animation->position.y = 20.0f;
        animation->position.z = 0.0f;
        animation->frame = 0.0f;
        animation->targetFrame = 0.0f;
        animation->target = animation->position;
    }
}

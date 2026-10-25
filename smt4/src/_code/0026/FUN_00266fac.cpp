/* NON_MATCHING: spatial-sound VFP allocation and position-to-target copy loads differ from retail. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

struct MapHudAnimation {
    u8 unk00[0x30];
    f32 frame;
    u8 unk34[0x28];
    f32 position[3]; /* 0x5C */
    f32 target[3]; /* 0x68 */
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
    f32 position[3];
    u8 unk28[0x10];
};
extern "C" {
extern MapHudSelection *g_mapIf;
extern s32 g_gameState;
extern DeferredMapModelPosition *g_deferredMapModels;
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
            const f32 *position = g_deferredMapModels[id].position;
            SoundActorQueuePosition soundPosition = {
                position[0] / 3.0f, position[1] / 3.0f, position[2] / 3.0f
            };
            FUN_00291e40(0x10001FD, soundPosition);
        }
        animation->position[0] = 0.0f;
        animation->position[1] = 20.0f;
        animation->position[2] = 0.0f;
        animation->frame = 0.0f;
        animation->targetFrame = 0.0f;
        animation->target[0] = animation->position[0];
        animation->target[1] = 20.0f;
        animation->target[2] = animation->position[2];
    }
}

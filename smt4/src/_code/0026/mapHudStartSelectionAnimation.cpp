/* NON_MATCHING: only the third position float's load is scheduled differently: retail adds the position offset first
 * and loads it as `vldr s3, [r0, #8]` after the vldmia; this build folds it into `vldr s3, [r0, #36]` before. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include "map/DeferredModels.h"

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
extern "C" {
extern MapHudSelection *g_mapIf;
extern DeferredModelWork *g_deferredMapModels;
}

/* Restart the HUD's selection animation and sound at the selected map model. */
extern "C" void mapHudStartSelectionAnimation(s32 mode, s32 id)
{
    MapHudSelection *hud = g_mapIf;
    MapHudAnimation *animation = &hud->animation;
    if (hud->mode == mode && animation->id == id) {
        return;
    }
    hud->mode = (s8)mode;
    if (mode != 0) {
        animation->id = id;
        if (g_gameState.mapId > 100) {
            /* The sound system works in thirds of map units. */
            MapVector world = g_deferredMapModels->entries[id].position;
            SoundActorQueuePosition position;
            position.x = world.x / 3.0f;
            position.y = world.y / 3.0f;
            position.z = world.z / 3.0f;
            soundActorStartOnFreeChannel(0x10001FD, position);
        }
        animation->position.x = 0.0f;
        animation->position.y = 20.0f;
        animation->position.z = 0.0f;
        animation->frame = 0.0f;
        animation->targetFrame = 0.0f;
        animation->target = animation->position;
    }
}

#include "runtime/Stdio.h"
#include "map/mapDepart.h"
#include "game/GameStateA.h"

struct ResourceOwner;
struct MapSceneResourceView {
    u8 unk00[0x30];
    s32 mapId;
    s32 areaId;
    u8 unk38[0x98];
    ResourceOwner *owner;
};
extern "C" {
extern const char DAT_00531b14[], DAT_00531af8[], DAT_00531b50[], DAT_00531b34[];
void resourceOwnerLoadNamed(ResourceOwner *, const char *);
s32 FUN_0040af60(ResourceOwner *);
void FUN_0040afe0(ResourceOwner *, s32, s32);
void FUN_0040ae70(ResourceOwner *, s32);

/* Builds the scene's environment and model paths (the dark-zone, progress or map/area variant) and loads its model. */
void FUN_002bceb0(MapSceneResourceView *scene)
{
    char environmentPath[128];
    char modelPath[128];
    if (g_gameState.darkZone) {
        __2sprintf(environmentPath, DAT_00531b14, scene->mapId, scene->mapId, scene->areaId);
        __2sprintf(modelPath, DAT_00531af8, scene->mapId, scene->mapId, scene->areaId);
    }
    if (g_gameState.progressEnabled) {
        __2sprintf(environmentPath, DAT_00531b50, 24, 24, 1);
        __2sprintf(modelPath, DAT_00531b34, 24, 24, 1);
    } else {
        __2sprintf(environmentPath, DAT_00531b50, scene->mapId, scene->mapId, scene->areaId);
        __2sprintf(modelPath, DAT_00531b34, scene->mapId, scene->mapId, scene->areaId);
    }
    resourceOwnerLoadNamed(scene->owner, modelPath);
    if (FUN_0040af60(scene->owner)) {
        if (scene->mapId == 32 && scene->areaId == 2) {
            FUN_0040afe0(scene->owner, 3, 0);
            return;
        }
        FUN_0040ae70(scene->owner, 1);
    }
}
}

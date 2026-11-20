/* NON_MATCHING: the lifted position's y/z stores, the registry load around the running-map test,
 * and the resulting branch and literal-pool offsets differ. */
#include "shard/Shard0033.h"
#include "status/StatusCamera.h"
#include "code/Code0038.h"
#include "ui/UiSpriteApi.h"
#include "game/GameGlobalsRef.h"
#include "map/MapSceneAccess.h"

class StatusScreenModel {
public:
    virtual ~StatusScreenModel();
};

struct HandleRegistryEntry {
    /* 0x00 */ u8 unk00[0xC4];
    /* 0xC4 */ u8 unkC4;
};
struct HandleRegistry {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ HandleRegistryEntry *entry;
};

extern "C" {
extern HandleRegistry *g_handleRegistry;

s32 lmapSceneGetScript(void);
void linkHolderRunAll(StatusScreenModel *model, const Vec3 *position);
void resourceOwnerReleaseAll(StatusScreenModel *model);
void resourceOwnerReleaseAndReset(HandleRegistry *registry);
s32 lmapMainIsRunning(void);
void statusCameraDestroy(void);


void gameStateChange(s32 state);

/* Closes the status panel: hides the status model, restarts the panel's sprite animations and
 * returns to state 3. */
void statusPanelClose(void)
{
    ObjB *game = g_gameGlobals.instance;
    if (game->activeState == 4)
        return;
    if (game->unk2018 == 3 || game->unk2018 == 10) {
        if (lmapSceneGetScript()) {
            if (game->unk2034) {
                Vec3 position;
                position.x = game->statusModelPosition[0];
                position.y = game->statusModelPosition[1] + 1000.0f;
                position.z = game->statusModelPosition[2];
                linkHolderRunAll((StatusScreenModel *)game->unk2034, &position);
                lmapSceneSetUnk134(1);
            }
        } else if (game->unk2034) {
            resourceOwnerReleaseAll((StatusScreenModel *)game->unk2034);
            if (!lmapMainIsRunning()) {
                g_handleRegistry->entry->unkC4 = game->unk20E6;
                resourceOwnerReleaseAndReset(g_handleRegistry);
            } else {
                g_handleRegistry->entry->unkC4 = game->unk20E6;
            }
            if (g_gameGlobals.ownsStatusModel) {
                if (game->unk2034)
                    delete (StatusScreenModel *)game->unk2034;
            }
        }
        if (game->unk2034)
            statusCameraDestroy();
    }
    uiSpriteSetKeyframe(&game->statusSprites.status[0], 5, 0);
    uiSpriteSelectAnim(&game->statusSprites.status[1], 3);
    uiSpriteSelectAnim(&game->statusSprites.status[2], 3);
    uiSpriteSelectAnim(&game->statusSprites.status[3], 3);
    uiSpriteSetKeyframe(&game->statusSprites.status[4], 5, 0);
    uiSpriteSelectAnim(&game->statusSprites.status[5], 3);
    uiSpriteSelectAnim(&game->statusSprites.status[6], 3);
    for (s32 i = 0; i < 10; i++) {
        uiSpriteSetKeyframe(&game->spriteLists.primary[i], 0x11, 0);
        uiSpriteSetImageKeyframe(&game->spriteLists.primary[i], 0xE, 0);
        uiSpriteSetKeyframe(&game->spriteLists.secondary[i], 5, 0);
    }
    if (game->unk2017 == 5)
        uiSpriteSetKeyframe((UiSpriteState *)game->block12DC, 5, 0);
    gameStateChange(3);
}

} /* extern "C" */

/* NON_MATCHING: retail shares the final `if (model) statusCameraDestroy()` tail between the script and non-script paths (b to the common test), stores y/z of the lifted position with one vstmia, and keeps the game pointer in r5 with the state base in r7; armcc here duplicates the tail and copies z through an integer register. */
#include "shard/Shard0033.h"
#include "status/StatusCamera.h"

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
extern ObjBRef g_gameGlobals;
extern HandleRegistry *g_handleRegistry;

s32 lmapSceneGetScript(void);
void linkHolderRunAll(StatusScreenModel *model, const Vec3 *position);
void FUN_003857b4(s32 value);
void resourceOwnerReleaseAll(StatusScreenModel *model);
void resourceOwnerReleaseAndReset(HandleRegistry *registry);
s32 lmapMainIsRunning(void);
void statusCameraDestroy(void);
void uiSpriteSelectAnim(UiSpriteState *sprite, s32 anim);
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 key, s32 arg);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 arg);
void gameStateChange(s32 state);

/* Closes the status panel: hides the status model, restarts the panel's sprite animations and
 * returns to state 3. */
void FUN_0022e774(void)
{
    ObjB *game = g_gameGlobals.instance;
    if (game->activeState == 4)
        return;
    if (game->unk2018 == 3 || game->unk2018 == 10) {
        if (lmapSceneGetScript()) {
            if (game->unk2034) {
                Vec3 position = { game->statusModelPosition[0], game->statusModelPosition[1] + 1000.0f,
                                  game->statusModelPosition[2] };
                linkHolderRunAll((StatusScreenModel *)game->unk2034, &position);
                FUN_003857b4(1);
                if (game->unk2034)
                    statusCameraDestroy();
            }
        } else if (game->unk2034) {
            resourceOwnerReleaseAll((StatusScreenModel *)game->unk2034);
            if (lmapMainIsRunning()) {
                g_handleRegistry->entry->unkC4 = game->unk20E6;
            } else {
                g_handleRegistry->entry->unkC4 = game->unk20E6;
                resourceOwnerReleaseAndReset(g_handleRegistry);
            }
            if (g_gameGlobals.ownsStatusModel) {
                if (game->unk2034)
                    delete (StatusScreenModel *)game->unk2034;
            }
            if (game->unk2034)
                statusCameraDestroy();
        }
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

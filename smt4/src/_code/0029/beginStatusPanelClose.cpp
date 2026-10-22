/* NON_MATCHING: model-cleanup branches merge differently, vector transfers and cached sprite-base addressing differ; -O2 candidate. */
#include "shard/GameGlobals.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "status/StatusCamera.h"

class StatusScreenModel {
public:
    virtual ~StatusScreenModel();
};
extern "C" {
void *lmapSceneGetScript();
void nodeOwnerSetTranslations(StatusScreenModel *, const Vec3 *);
void lmapSceneSetUnk134(s32);
void statusCameraDestroy();
void mdlPartsRelease(StatusScreenModel *);
s32 lmapMainIsRunning();
void asdModelSlotRelease(s32);
void timerStart(UiAnimatedSprite *, s32, s32);
void FUN_002bee58(UiAnimatedSprite *, s32);

void beginStatusPanelClose()
{
    GameData *state = g_gameGlobals.data;
    if (state->activeState == 3)
        return;
    if (state->unk1E67 == 3 || state->unk1E67 == 9) {
        void *script = lmapSceneGetScript();
        if (state->unk1E80) {
            if (script) {
                const Vec3 *origin = (const Vec3 *)state->unk1E84;
                Vec3 position = { origin->x, origin->y + 1000.0f, origin->z };
                nodeOwnerSetTranslations((StatusScreenModel *)state->unk1E80, &position);
                lmapSceneSetUnk134(1);
            } else {
                mdlPartsRelease((StatusScreenModel *)state->unk1E80);
                if (!lmapMainIsRunning())
                    asdModelSlotRelease(0);
                if (g_gameGlobals.ownsStatusModel)
                    delete (StatusScreenModel *)state->unk1E80;
            }
            if (state->unk1E80)
                statusCameraDestroy();
        }
    }
    UiAnimatedSprite *sprites = (UiAnimatedSprite *)(state->unk0301 + 0x8b); // 0x38c
    timerStart(&sprites[0], 5, 0);
    FUN_002bee58(&sprites[1], 3);
    FUN_002bee58(&sprites[2], 3);
    FUN_002bee58(&sprites[3], 3);
    timerStart(&sprites[4], 5, 0);
    timerStart(&sprites[5], 5, 0);
    timerStart(&sprites[6], 5, 0);
    FUN_002bee58(&sprites[7], 3);
    for (s32 i = 0; i < 10; ++i) {
        timerStart(&sprites[8 + i], 5, 0);
        timerStart(&sprites[18 + i], 5, 0);
    }
    GameData *current = g_gameGlobals.data;
    current->unk10 = 0;
    current->activeState = 2;
}
}

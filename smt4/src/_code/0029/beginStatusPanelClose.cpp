/* NON_MATCHING: 12 lines in the raised model position: retail copies x through a core register but loads y and z into VFP registers and stores them with one vstmia; the build copies z through a core register too. */
#include "shard/GameGlobals.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "status/StatusCamera.h"
#include "map/MapSceneAccess_Smt4.h"
#include "map/MapSceneAccess.h"

class StatusScreenModel {
public:
    virtual ~StatusScreenModel();
};
/* Enters game state `state` with its step counter cleared. */
static __inline void gameSetState(s32 state)
{
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = state;
}

extern "C" {
void nodeOwnerSetTranslations(StatusScreenModel *, const Vec3 *);
void statusCameraDestroy();
void mdlPartsRelease(void *model);
s32 lmapMainIsRunning();
void asdModelSlotRelease(s32);

void beginStatusPanelClose()
{
    GameData *state = g_gameGlobals.data;
    if (state->activeState == 3)
        return;
    if (state->unk1E67 == 3 || state->unk1E67 == 9) {
void *script = lmapSceneGetScript();
        if (script) {
            if (state->unk1E80) {
                Vec3 position = { state->statusModelPosition.x, state->statusModelPosition.y + 1000.0f,
                                  state->statusModelPosition.z };
                nodeOwnerSetTranslations((StatusScreenModel *)state->unk1E80, &position);
                lmapSceneSetUnk134(1);
            }
        } else if (state->unk1E80) {
            mdlPartsRelease((StatusScreenModel *)state->unk1E80);
            if (!lmapMainIsRunning())
                asdModelSlotRelease(0);
            if (g_gameGlobals.ownsStatusModel)
                delete (StatusScreenModel *)state->unk1E80;
        }
        if (state->unk1E80)
            statusCameraDestroy();
    }
    uiSpriteSetKeyframe(&state->panelSprites[0], 5, 0);
    spriteStartAnimationByIndex(&state->panelSprites[1], 3);
    spriteStartAnimationByIndex(&state->panelSprites[2], 3);
    spriteStartAnimationByIndex(&state->panelSprites[3], 3);
    uiSpriteSetKeyframe(&state->panelSprites[4], 5, 0);
    uiSpriteSetKeyframe(&state->panelSprites[5], 5, 0);
    uiSpriteSetKeyframe(&state->panelSprites[6], 5, 0);
    spriteStartAnimationByIndex(&state->panelSprites[7], 3);
    for (s32 i = 0; i < 10; ++i) {
        uiSpriteSetKeyframe(&state->panelSprites[8 + i], 5, 0);
        uiSpriteSetKeyframe(&state->panelSprites[18 + i], 5, 0);
    }
    gameSetState(2);
}
}

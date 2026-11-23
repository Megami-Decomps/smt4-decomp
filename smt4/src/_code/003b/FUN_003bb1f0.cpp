#include "shard/S3SceneWidget.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteApi.h"
#include <string.h>

extern "C" {
void uiInitializeEightTimerSet(void *timers);

void drawParameterBlockClear(UiResourceParameters *parameters);

/* Animation tables for paramsInit, defined statically in the original file. */
static const s32 sMoveKeys[3] = { 10 << 16, -2 << 16, 4 };
struct SceneFloatKey {
    f32 from;
    f32 to;
    s32 frames;
};
static const SceneFloatKey sFadeKeys[2] = { { 0.0f, 1.0f, 4 }, { 0.0f, 1.0f, 10 } };
static const s32 sSpriteKeys[14] = { -3, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0 };

void FUN_003bb1f0(SceneWidget *widget)
{
    widget->hidden = 0;
    widget->animate = 0;
    widget->cursorMarked = 0;
    widget->initialFrame = 0;
    widget->frame = 0;
    widget->shownTex = -1;
    widget->shownKey = -1;
    widget->nextTex = -1;
    widget->nextKey = -1;
    widget->queuedTex = -1;
    widget->queuedKey = -1;
    memset(widget->loaded, 0, sizeof(widget->loaded));
    drawParameterBlockClear(&widget->parameters);
    paramsInit(&widget->parameters, sMoveKeys, sizeof(sMoveKeys), sFadeKeys, sizeof(sFadeKeys),
        NULL, 0, NULL, 0, sSpriteKeys, sizeof(sSpriteKeys));
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteStateInitFromSource(&widget->buttons[index], SCENE_TEXTURE_TABLE, 0, &widget->parameters, 21, 1.0f);
        uiSpriteSetImageKeyframe(&widget->buttons[index], 0, 0);
    }
    uiSpriteStateInitFromSource(&widget->sprite, SCENE_TEXTURE_TABLE, 0, &widget->parameters, 21, 1.0f);
    uiInitializeEightTimerSet(reinterpret_cast<u8 *>(widget) + 0xa8);
}
}

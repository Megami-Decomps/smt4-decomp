/* NON_MATCHING: only the button-address multiply in the sprite loop differs (retail computes index * 35 in r0, the build in r1). */
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
    // The shared padding begins at unaligned +0x632, so keep the aligned parameter/sprite view local.
    struct InitializationView {
        u8 prefix[0x630];
        u8 hidden, animate, cursorMarked, unk633;
        UiResourceParameters parameters;
        UiSpriteState buttons[10];
        UiSpriteState image;
        u32 initialFrame;
        s32 frame;
        s32 shownTexture, shownKey, nextTexture, nextKey, queuedTexture, queuedKey;
        u32 loaded[16];
    };
    typedef char LayoutCheck[offsetof(InitializationView, parameters) == 0x634 &&
        offsetof(InitializationView, buttons) == 0x654 &&
        offsetof(InitializationView, image) == 0xbcc &&
        offsetof(InitializationView, loaded) == 0xc78 ? 1 : -1];
    InitializationView *work = reinterpret_cast<InitializationView *>(widget);
    work->hidden = 0;
    work->animate = 0;
    work->cursorMarked = 0;
    work->initialFrame = 0;
    work->frame = 0;
    work->shownTexture = -1;
    work->shownKey = -1;
    work->nextTexture = -1;
    work->nextKey = -1;
    work->queuedTexture = -1;
    work->queuedKey = -1;
    memset(work->loaded, 0, sizeof(work->loaded));
    drawParameterBlockClear(&work->parameters);
    paramsInit(&work->parameters, sMoveKeys, sizeof(sMoveKeys), sFadeKeys, sizeof(sFadeKeys),
        NULL, 0, NULL, 0, sSpriteKeys, sizeof(sSpriteKeys));
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteStateInitFromSource(&work->buttons[index], SCENE_TEXTURE_TABLE, 0, &work->parameters, 21, 1.0f);
        uiSpriteSetImageKeyframe(&work->buttons[index], 0, 0);
    }
    uiSpriteStateInitFromSource(&work->image, SCENE_TEXTURE_TABLE, 0, &work->parameters, 21, 1.0f);
    uiInitializeEightTimerSet(reinterpret_cast<u8 *>(widget) + 0xa8);
}
}

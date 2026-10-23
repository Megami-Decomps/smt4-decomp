/* NON_MATCHING: initial-state store scheduling, resource-address pooling and sprite-index multiply registers differ. */
#include "shard/S3SceneWidget.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "ui/UiSpriteState.h"
#include <string.h>

extern "C" {
void uiInitializeEightTimerSet(void *timers);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 image, s32 frame);
void FUN_002bd954(UiSpriteState *sprite, u32 table, u32 image, Params002c312c *parameters, u32 flags, f32 scale);
void paramsInit(Params002c312c *parameters, const void *first, u32 firstSize,
    const void *second, u32 secondSize, u32 a, u32 b, u32 c, u32 d, const void *third, u32 thirdSize);
void drawParameterBlockClear(Params002c312c *parameters);
extern const u8 DAT_00404e08[];
extern const u8 DAT_00404e14[];
extern const u8 DAT_00404e2c[];

void FUN_003bb1f0(SceneWidget *widget)
{
    // The shared padding begins at unaligned +0x632, so keep the aligned parameter/sprite view local.
    struct InitializationView {
        u8 prefix[0x630];
        u8 hidden, animate, cursorMarked, unk633;
        Params002c312c parameters;
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
    work->shownTexture = -1;
    work->frame = 0;
    work->shownKey = -1;
    work->nextTexture = -1;
    work->nextKey = -1;
    work->queuedTexture = -1;
    work->queuedKey = -1;
    memset(work->loaded, 0, sizeof(work->loaded));
    drawParameterBlockClear(&work->parameters);
    paramsInit(&work->parameters, DAT_00404e08, 12, DAT_00404e14, 24,
        0, 0, 0, 0, DAT_00404e2c, 56);
    for (s32 index = 0; index < 10; ++index) {
        FUN_002bd954(&work->buttons[index], SCENE_TEXTURE_TABLE, 0, &work->parameters, 21, 1.0f);
        uiSpriteSetImageKeyframe(&work->buttons[index], 0, 0);
    }
    FUN_002bd954(&work->image, SCENE_TEXTURE_TABLE, 0, &work->parameters, 21, 1.0f);
    uiInitializeEightTimerSet(reinterpret_cast<u8 *>(widget) + 0xa8);
}
}

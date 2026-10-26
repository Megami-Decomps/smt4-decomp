/* NON_MATCHING: selector snapshot now copies as LDM/STM; remaining: callee-saved register numbering (zero/flags constant r7 vs r8), a separate zero register for the main-view flag store, and a compiler `nop {0}` before the text create. */
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_AsdText.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <string.h>

struct PanelImageKinds {
    union {
        s8 kinds[24];
        u32 words[6];
    };
};

struct AocPanelList {
    u8 unk000[0x414];
    u8 flag414;
    u8 flag415;
    u8 unk416[0xa];
    UiResourceParameters resources;
};

struct AocPanelWork {
    u8 unk0000[0x35c];
    UiResourceParameters resources;
    UiAnimatedSprite sprites[24];
    UiAnimatedSprite background;
    u8 unk1128[0x88];
    AocPanelList list;
    u8 unk15f0[0x1c0];
    u8 selectionState[0x480];
    AsdText *text;
};

struct AocPanelMainView {
    AocMain main;
    u8 unk758[0x429];
    u8 flagb81;
};

extern "C" {
extern AocMain *g_aocMain;
extern const u8 DAT_003ff12c[];
extern const s8 DAT_003ff15c[24];
void drawParameterBlockClear(UiResourceParameters *parameters);

void FUN_002bd954(UiAnimatedSprite *sprite, u32 group, u32 id,
                  UiResourceParameters *parameters, u16 flags, f32 speed);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 restart);
void FUN_00295eb0(UiAnimatedSprite *sprite, u32 group, u32 id);
void FUN_002ba78c(AocPanelList *list);
AsdText *asdTextCreate(u32 flags);
void positionStateSet(AsdText *text, u32 first, u32 second, f32 scale);
void uiInitializeEightTimerSet(void *selection);

void aocMenuInitializePanelSprites(void *context)
{
    AocPanelWork *work = (AocPanelWork *)context;
    drawParameterBlockClear(&work->resources);
    paramsInit(&work->resources, 0, 0, DAT_003ff12c, 12, 0, 0, 0, 0, 0, 0);
    FUN_002bd954(&work->background, 0x1d, 2000, &work->resources, 11, 1.0f);
    uiSpriteSetImageKeyframe(&work->background, 0, 0);
    PanelImageKinds imageKinds = *(const PanelImageKinds *)DAT_003ff15c;
    for (s32 index = 0; index < 24; ++index) {
        FUN_002bd954(&work->sprites[index], 0x1d, 2001 + imageKinds.kinds[index],
                      &work->resources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->sprites[index], 0, 0);
        FUN_00295eb0(&work->sprites[index], 0x1d, 2005 + index);
    }
    FUN_002ba78c(&work->list);
    work->list.flag415 = 0;
    ((AocPanelMainView *)g_aocMain)->flagb81 = 0;
    work->text = asdTextCreate(0);
    asdTextSetBaseColor(work->text, 0x320202ff);
    positionStateSet(work->text, 0, 0x646464ff, 0.0f);
    uiInitializeEightTimerSet(work->selectionState);
}
}

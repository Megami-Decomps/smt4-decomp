#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_AsdText.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct AocUiSprite {
    u8 data[0x8c];
};

/* The image (0 or 1) each of the 24 panel entries starts with. */
struct AocSpriteLayout {
    s8 frames[24];
};

struct AocMenuSprites {
    /* 0x0000 */ u8 unk0000[0x35c];
    /* 0x035c */ UiResourceParameters parameters;
    /* 0x037c */ AocUiSprite entries[24];
    /* 0x109c */ AocUiSprite header;
    /* 0x1128 */ u8 unk1128[0x88];
    /* 0x11b0 */ u8 panel[0x415];
    /* 0x15c5 */ u8 ready;
    /* 0x15c6 */ u8 unk15c6[0x1ea];
    /* 0x17b0 */ u8 control[0x480];
    /* 0x1c30 */ AsdText *text;
};

extern "C" {
extern AocMain *g_aocMain;
extern const char DAT_003ff12c[];
void drawParameterBlockClear(UiResourceParameters *parameters);

void FUN_002bd954(AocUiSprite *sprite, s32 group, s32 image, UiResourceParameters *parameters, s32 flags, f32 scale);
void uiSpriteSetImageKeyframe(AocUiSprite *sprite, s32 keyframe, s32 flags);
void FUN_00295eb0(AocUiSprite *sprite, s32 group, s32 image);
void FUN_002ba78c(void *panel);
AsdText *asdTextCreate(u32 flags);
void positionStateSet(AsdText *text, s32 slot, u32 color, f32 duration);
void uiInitializeEightTimerSet(void *control);
void aocMenuSetReadyFlag(AocMain *owner, u8 ready);

// Initialize the AOC menu's common sprite resources, entry frames and text.
void aocMenuInitializePanelSprites(AocMenuSprites *menu)
{
    drawParameterBlockClear(&menu->parameters);
    paramsInit(&menu->parameters, 0, 0, DAT_003ff12c, 0xc, 0, 0, 0, 0, 0, 0);
    FUN_002bd954(&menu->header, 0x1d, 2000, &menu->parameters, 0xb, 1.0f);
    uiSpriteSetImageKeyframe(&menu->header, 0, 0);
    AocSpriteLayout layout = {{
        0, 1, 1, 0, 0, 0, 1, 1,
        1, 1, 0, 0, 0, 0, 1, 1,
        1, 1, 0, 0, 0, 1, 1, 0
    }};
    for (s32 index = 0; index < 24; ++index) {
        FUN_002bd954(&menu->entries[index], 0x1d, layout.frames[index] + 2001,
                      &menu->parameters, 0xb, 1.0f);
        uiSpriteSetImageKeyframe(&menu->entries[index], 0, 0);
        FUN_00295eb0(&menu->entries[index], 0x1d, index + 2005);
    }
    FUN_002ba78c(menu->panel);
    menu->ready = 0;
    aocMenuSetReadyFlag(g_aocMain, 0);
    menu->text = asdTextCreate(0);
    asdTextSetBaseColor(menu->text, 0x320202ff);
    positionStateSet(menu->text, 0, 0x646464ff, 0.0f);
    uiInitializeEightTimerSet(menu->control);
}
}

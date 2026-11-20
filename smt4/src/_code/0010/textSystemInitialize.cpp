#include "common.h"

extern "C" {

typedef void (*Callback)(void);

extern u8 DAT_0043e1b8[];
extern u8 DAT_0043e1f8[];

void asdFontAllocateGlyphSets(s32 count);
u32 fontFileLoadSync(const char *path);
void asdFontLoadGlyphSet(s32 slot, u32 font);
void fontSetBaselineOffset(s32 slot, f32 scale);
void workRangeSetLowerBound(s32 value);
void FUN_0010b390(s32 value);
void asdTextSetDefaultValue(void *table);
void FUN_0010e594(void *table);
void asdTextSetDefaultColor(u32 color);
void callbackBindingInstall(Callback first, Callback second);
void FUN_0010a694(u32 id, s32 slot, s32 flags);
void scrCommSetQueueRequestCallback(Callback callback);
void FUN_0010a770(Callback callback);
void asdTextRegisterSlot(u32 id, s32 slot, Callback callback);
void asdTextSetDefaultRenderSetting(u32 setting);
void FUN_0010a2f8(void);
void messageExpandControlCode(void);
void scrCommQueueRequest(void);
void FUN_00109b08(void);
void messageTextSelectPortrait(void);
void messageTextSetPortraitFrame(void);

/* Loads the game's fonts and installs the text system's defaults and callbacks. */
void textSystemInitialize(void)
{
    asdFontAllocateGlyphSets(6);
    asdFontLoadGlyphSet(0, fontFileLoadSync("font/rodin_6_6.bcfnt"));
    asdFontLoadGlyphSet(1, fontFileLoadSync("font/gmaru_9_9.bcfnt"));
    asdFontLoadGlyphSet(2, fontFileLoadSync("font/rodin_12_12.bcfnt"));
    asdFontLoadGlyphSet(3, fontFileLoadSync("font/rodin_14_14.bcfnt"));
    asdFontLoadGlyphSet(4, fontFileLoadSync("font/rodin_16_16.bcfnt"));
    asdFontLoadGlyphSet(5, fontFileLoadSync("font/demo_font.bcfnt"));
    fontSetBaselineOffset(0, -10.0f);
    fontSetBaselineOffset(1, -2.0f);
    fontSetBaselineOffset(2, 0.0f);
    fontSetBaselineOffset(3, 0.0f);
    fontSetBaselineOffset(4, 0.0f);
    workRangeSetLowerBound(3);
    FUN_0010b390(5);
    asdTextSetDefaultValue(DAT_0043e1b8);
    FUN_0010e594(DAT_0043e1f8);
    asdTextSetDefaultColor(0xffffff00);
    callbackBindingInstall(FUN_0010a2f8, messageExpandControlCode);
    FUN_0010a694(0xf87a, 1, 0);
    FUN_0010a694(0xf87b, 4, 0);
    scrCommSetQueueRequestCallback(scrCommQueueRequest);
    FUN_0010a770(FUN_00109b08);
    asdTextRegisterSlot(0xf87a, 1, messageTextSelectPortrait);
    asdTextRegisterSlot(0xf87b, 4, messageTextSetPortraitFrame);
    asdTextSetDefaultRenderSetting(0x8190);
}

}

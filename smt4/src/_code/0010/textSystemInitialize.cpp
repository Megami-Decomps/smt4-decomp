#include "common.h"

extern "C" {

typedef void (*Callback)(void);

extern u8 DAT_0043e1b8[];
extern u8 DAT_0043e1f8[];

void asdFontAllocateGlyphSets(s32 count);
u32 FUN_002c4904(const char *path);
void FUN_002c450c(s32 slot, u32 font);
void FUN_002c44dc(s32 slot, f32 scale);
void FUN_0010bedc(s32 value);
void FUN_0010b390(s32 value);
void FUN_0010b3b0(void *table);
void FUN_0010e594(void *table);
void asdTextSetDefaultColor(u32 color);
void callbackBindingInstall(Callback first, Callback second);
void FUN_0010a694(u32 id, s32 slot, s32 flags);
void scrCommSetQueueRequestCallback(Callback callback);
void FUN_0010a770(Callback callback);
void asdTextRegisterSlot(u32 id, s32 slot, Callback callback);
void asdTextSetDefaultRenderSetting(u32 setting);
void FUN_0010a2f8(void);
void FUN_0010c83c(void);
void scrCommQueueRequest(void);
void FUN_00109b08(void);
void FUN_00108074(void);
void FUN_0010930c(void);

/* Loads the game's fonts and installs the text system's defaults and callbacks. */
void textSystemInitialize(void)
{
    asdFontAllocateGlyphSets(6);
    FUN_002c450c(0, FUN_002c4904("font/rodin_6_6.bcfnt"));
    FUN_002c450c(1, FUN_002c4904("font/gmaru_9_9.bcfnt"));
    FUN_002c450c(2, FUN_002c4904("font/rodin_12_12.bcfnt"));
    FUN_002c450c(3, FUN_002c4904("font/rodin_14_14.bcfnt"));
    FUN_002c450c(4, FUN_002c4904("font/rodin_16_16.bcfnt"));
    FUN_002c450c(5, FUN_002c4904("font/demo_font.bcfnt"));
    FUN_002c44dc(0, -10.0f);
    FUN_002c44dc(1, -2.0f);
    FUN_002c44dc(2, 0.0f);
    FUN_002c44dc(3, 0.0f);
    FUN_002c44dc(4, 0.0f);
    FUN_0010bedc(3);
    FUN_0010b390(5);
    FUN_0010b3b0(DAT_0043e1b8);
    FUN_0010e594(DAT_0043e1f8);
    asdTextSetDefaultColor(0xffffff00);
    callbackBindingInstall(FUN_0010a2f8, FUN_0010c83c);
    FUN_0010a694(0xf87a, 1, 0);
    FUN_0010a694(0xf87b, 4, 0);
    scrCommSetQueueRequestCallback(scrCommQueueRequest);
    FUN_0010a770(FUN_00109b08);
    asdTextRegisterSlot(0xf87a, 1, FUN_00108074);
    asdTextRegisterSlot(0xf87b, 4, FUN_0010930c);
    asdTextSetDefaultRenderSetting(0x8190);
}

}

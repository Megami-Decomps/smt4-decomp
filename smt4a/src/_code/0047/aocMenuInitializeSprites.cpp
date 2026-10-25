#include "shard/W4_Match3_AocMainA.h"

struct AocSpriteParameters {
    u8 data[0x20];
};

struct AocUiSprite {
    u8 data[0x8c];
};

struct AocSpriteLayout {
    s8 frames[24];
};

struct AocMenuSprites {
    /* 0x0000 */ u8 unk0000[0x35c];
    /* 0x035c */ AocSpriteParameters parameters;
    /* 0x037c */ AocUiSprite entries[24];
    /* 0x109c */ AocUiSprite header;
    /* 0x1128 */ u8 unk1128[0x88];
    /* 0x11b0 */ u8 panel[0x415];
    /* 0x15c5 */ u8 ready;
    /* 0x15c6 */ u8 unk15c6[0x1ea];
    /* 0x17b0 */ u8 control[0x73c];
    /* 0x1eec */ u32 background;
};

extern "C" {
extern const char DAT_00526308[];
void paramsClearPacket(AocSpriteParameters *);
void paramsInit(AocSpriteParameters *, s32, s32, const char *, s32,
                s32, s32, s32, s32, s32, s32);
void FUN_0014e188(AocUiSprite *, s32 group, s32 image, AocSpriteParameters *, s32 flags, f32 scale);
void uiSpriteSetImageKeyframe(AocUiSprite *, s32 keyframe, s32 flags);
void FUN_00387240(AocUiSprite *, s32 group, s32 image);
void FUN_0015f258(void *panel);
u32 spriteHandleCreate(s32 flags);
void FUN_001527d8(u32 handle, u32 mask);
void positionStateSet(u32 handle, s32 slot, u32 color, f32 duration);
void FUN_004cf7cc(void *control);
void aocMenuSetReadyFlag(AocMainA *owner, u8 ready);

// Initialize the AOC menu's common sprite resources, entry frames and background.
void aocMenuInitializeSprites(AocMenuSprites *menu)
{
    paramsClearPacket(&menu->parameters);
    paramsInit(&menu->parameters, 0, 0, DAT_00526308, 0xc, 0, 0, 0, 0, 0, 0);
    FUN_0014e188(&menu->header, 0x14, 2000, &menu->parameters, 0xb, 1.0f);
    uiSpriteSetImageKeyframe(&menu->header, 0, 0);
    AocSpriteLayout layout = {{
        0, 1, 1, 0, 0, 0, 1, 1,
        1, 1, 0, 0, 0, 0, 1, 1,
        1, 1, 0, 0, 0, 1, 1, 0
    }};
    for (s32 index = 0; index < 24; ++index) {
        FUN_0014e188(&menu->entries[index], 0x14, layout.frames[index] + 2001,
                      &menu->parameters, 0xb, 1.0f);
        uiSpriteSetImageKeyframe(&menu->entries[index], 0, 0);
        FUN_00387240(&menu->entries[index], 0x14, index + 2005);
    }
    FUN_0015f258(menu->panel);
    menu->ready = 0;
    aocMenuSetReadyFlag(g_aocMain, 0);
    menu->background = spriteHandleCreate(0);
    FUN_001527d8(menu->background, 0xffffffff);
    positionStateSet(menu->background, 0, 0x646464ff, 0.0f);
    FUN_004cf7cc(menu->control);
}
}

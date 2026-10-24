/* NON_MATCHING: retail addresses the 0x2C-byte record fields as base + (i*44 + offset) in registers and builds the color words from reg-offset loads (and a different callee-saved set); the struct-array form folds offsets into immediates. */
#include "common.h"

struct DrawIntegerTriple { s32 x, y, z; };
struct DrawFloatTriple { f32 x, y, z; };
struct DrawParameterState;
struct FrameTransitionColors;
struct PackedScalarControl;

/* One screen effect entry: matched by id/sub, applies draw parameters, a frame transition and fixed effect colors. */
struct ScreenEffectEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 sub;
    /* 0x04 */ u8 option[3];
    /* 0x07 */ u8 positionX;
    /* 0x08 */ s16 positionY;
    /* 0x0A */ s16 positionZ;
    /* 0x0C */ f32 valueX;
    /* 0x10 */ u8 transitionRed;
    /* 0x11 */ u8 transitionGreen;
    /* 0x12 */ u8 transitionBlue;
    /* 0x13 */ u8 firstAlpha;
    /* 0x14 */ u8 secondAlpha;
    /* 0x15 */ u8 thirdAlpha;
    /* 0x16 */ u8 effectLevel;
    /* 0x17 */ u8 effectTint;
    /* 0x18 */ s32 selectCamera;
    /* 0x1C */ f32 valueY;
    /* 0x20 */ f32 valueZ;
    /* 0x24 */ u8 unk24[8];
};

struct ScreenEffectOwner {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ ScreenEffectEntry *entries;
};

struct CameraContext {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ f32 zoom;
};

struct HandleBlock {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ u32 control[4];
};

struct HandleRegistry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ HandleBlock *block;
};

extern "C" {
CameraContext *obj80Select(u32 index);
void FUN_0035c708(ScreenEffectOwner *state, u32 first, u32 second, u32 thirdAlpha);
void drawStoreAndApplyParameters(ScreenEffectOwner *state, DrawIntegerTriple options, DrawFloatTriple values,
                                 DrawIntegerTriple position);
void packedScalarControlInit(u32 *control, u32 category, f32 value);

extern HandleRegistry *g_handleRegistry;
extern u8 g_battleEffectSettings;
extern u8 DAT_0057aa01;
extern u8 DAT_0057aa02;
extern u32 DAT_0057aa1c;

/* Applies the screen effect entry matching (id, sub): draw parameters, frame transition and effect tint. */
void FUN_004d896c(ScreenEffectOwner *owner, s32 id, s32 sub)
{
    s32 i = 0;
    for (; ; i++) {
        ScreenEffectEntry *entry = &owner->entries[i];
        if (entry->id == -1) {
            return;
        }
        if (entry->id == id && entry->sub == sub) {
            break;
        }
        if (i + 1 >= 160) {
            return;
        }
    }

    ScreenEffectEntry *entry = &owner->entries[i];
    DrawIntegerTriple options = {entry->option[0], entry->option[1], entry->option[2]};
    DrawFloatTriple values = {entry->valueX, entry->valueY, entry->valueZ};
    DrawIntegerTriple position = {entry->positionX, entry->positionY, entry->positionZ};
    drawStoreAndApplyParameters(owner, options, values, position);

    if (owner->entries[i].selectCamera > 0) {
        packedScalarControlInit(g_handleRegistry->block->control, 24, 1.0f / obj80Select(0)->zoom);
    }

    entry = &owner->entries[i];
    u32 rgb = (entry->transitionRed << 24) | (entry->transitionGreen << 16) | (entry->transitionBlue << 8);
    FUN_0035c708(owner, rgb | entry->firstAlpha, entry->secondAlpha - 0x100, rgb | entry->thirdAlpha);

    entry = &owner->entries[i];
    u32 level = entry->effectLevel * 255 / 255;
    DAT_0057aa1c = (level << 24) + (level << 16) + (level << 8) + 0xff;
    s16 tint = entry->effectTint;
    g_battleEffectSettings = tint * 199 / 255;
    DAT_0057aa01 = tint * 150 / 255;
    DAT_0057aa02 = entry->effectTint * 36 / 255;
}

}

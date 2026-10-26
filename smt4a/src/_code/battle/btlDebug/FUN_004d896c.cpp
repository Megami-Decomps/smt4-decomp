/* NON_MATCHING: record fields now use direct owner->entries[i].field (base + i*44 + offset), the transition colour is one REV'd word, the call arguments evaluate right to left and the search loop shape matches retail; retail builds the position/value argument temporaries one at a time (fewer saved registers, frame 16) where the build hoists all loads first. */
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
    /* 0x10 */ union {
        u32 word;  // red, green, blue, alpha in memory order
        struct { u8 red, green, blue, alpha; } channels;
    } transition;
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

static __inline DrawIntegerTriple screenEffectOptions(ScreenEffectOwner *owner, s32 i)
{
    DrawIntegerTriple options = {owner->entries[i].option[0], owner->entries[i].option[1],
                                 owner->entries[i].option[2]};
    return options;
}

static __inline DrawFloatTriple screenEffectValues(ScreenEffectOwner *owner, s32 i)
{
    DrawFloatTriple values = {owner->entries[i].valueX, owner->entries[i].valueY, owner->entries[i].valueZ};
    return values;
}

static __inline DrawIntegerTriple screenEffectPosition(ScreenEffectOwner *owner, s32 i)
{
    DrawIntegerTriple position = {owner->entries[i].positionX, owner->entries[i].positionY,
                                  owner->entries[i].positionZ};
    return position;
}

/* Applies the screen effect entry matching (id, sub): draw parameters, frame transition and effect tint. */
void FUN_004d896c(ScreenEffectOwner *owner, s32 id, s32 sub)
{
    for (s32 i = 0; i < 160; i++) {
        if (owner->entries[i].id == -1) {
            return;
        }
        if (owner->entries[i].id == id && owner->entries[i].sub == sub) {
            drawStoreAndApplyParameters(owner, screenEffectOptions(owner, i), screenEffectValues(owner, i),
                                        screenEffectPosition(owner, i));

            if (owner->entries[i].selectCamera > 0) {
                packedScalarControlInit(g_handleRegistry->block->control, 24, 1.0f / obj80Select(0)->zoom);
            }

            FUN_0035c708(owner,
                         (__rev(owner->entries[i].transition.word) & 0xffffff00) |
                             owner->entries[i].transition.channels.alpha,
                         owner->entries[i].secondAlpha - 0x100,
                         (__rev(owner->entries[i].transition.word) & 0xffffff00) | owner->entries[i].thirdAlpha);

            u32 level = owner->entries[i].effectLevel * 255 / 255;
            DAT_0057aa1c = (level << 24) + (level << 16) + (level << 8) + 0xff;
            s16 tint = owner->entries[i].effectTint;
            g_battleEffectSettings = tint * 199 / 255;
            DAT_0057aa01 = tint * 150 / 255;
            DAT_0057aa02 = owner->entries[i].effectTint * 36 / 255;
            return;
        }
    }
}

}

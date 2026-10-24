/* NON_MATCHING: retail loads the 0.0f constant into s0 up front and uses s1 for the colour/frame conversions, and writes the 16-bit key before the metadata word; this build loads 0.0f late into s0 and reuses s0 for the conversions. */
#include "AsdSDK/Source/Gfx/Effect/EffectTransformCopy.h"

/* The float mirror of the first transform key that the effect's key tracks interpolate. */
struct EffectKeyShadow {
    /* 0x00 */ f32 color[4];
    /* 0x10 */ u32 flags;
    /* 0x14 */ u32 texture;
    /* 0x18 */ u32 animation;
    /* 0x1C */ f32 frame;
    /* 0x20 */ f32 width;
    /* 0x24 */ f32 height;
    /* 0x28 */ f32 mode;
    /* 0x2C */ f32 reserved[11];
};

/* An effect with a transform key set and the tracks that animate it. */
struct EffectKeyTrack : EffectTransformCopyState {
    /* 0x134 */ u8 unk134[0xB0];
    /* 0x1E4 */ EffectKeyShadow shadow;
    /* 0x23C */ u8 unk23C[0xA5];
    /* 0x2E1 */ u8 tripleState[0xB];
    /* 0x2EC */ u32 reserved[20];
};

extern "C" {
void wordTripleClear(u8 *state);
void effCopyTransformColorKeys(EffectKeyTrack *destination, const EffectTransformCopyState *source);
f32 FUN_00291620(s32 mode, s32 range, s32 positive);
void colorKeyTrackAdvanceRgb(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_001dd974(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_001dda40(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_001ee200(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_001ee3dc(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_001ee2bc(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_002030bc(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_002031dc(EffectKeyTrack *effect, const EffectTransformCopyState *source);
void FUN_002032fc(EffectKeyTrack *effect, const EffectTransformCopyState *source);

/* Starts the effect from its definition: clears the track state, mirrors the first key and sets up every key track. */
void FUN_00193c70(EffectKeyTrack *effect, const EffectTransformCopyState *source)
{
    wordTripleClear(effect->tripleState);
    effect->reserved[0] = 0;
    effect->reserved[1] = 0;
    effect->reserved[2] = 0;
    effect->reserved[3] = 0;
    effect->reserved[4] = 0;
    effect->reserved[5] = 0;
    effect->reserved[6] = 0;
    effect->reserved[7] = 0;
    effect->reserved[8] = 0;
    effect->reserved[9] = 0;
    effect->reserved[10] = 0;
    effect->reserved[11] = 0;
    effect->reserved[12] = 0;
    effect->reserved[13] = 0;
    effect->reserved[14] = 0;
    effect->reserved[15] = 0;
    effect->reserved[16] = 0;
    effect->reserved[17] = 0;
    effect->reserved[18] = 0;
    effect->reserved[19] = 0;
    effect->shadow.color[0] = (f32)source->keys[0].color[0];
    effect->shadow.color[1] = (f32)source->keys[0].color[1];
    effect->shadow.color[2] = (f32)source->keys[0].color[2];
    effect->shadow.color[3] = (f32)source->keys[0].color[3];
    effect->shadow.flags = source->keys[0].flags;
    effect->shadow.texture = source->keys[0].texture;
    effect->shadow.animation = source->keys[0].animation;
    effect->shadow.frame = (f32)(s16)source->keys[0].frame;
    effect->shadow.width = (f32)(s16)source->keys[0].width;
    effect->shadow.height = (f32)(s16)source->keys[0].height;
    effect->shadow.mode = (f32)(s16)source->keys[0].mode;
    effect->shadow.reserved[0] = 0.0f;
    effect->shadow.reserved[1] = 0.0f;
    effect->shadow.reserved[2] = 0.0f;
    effect->shadow.reserved[3] = 0.0f;
    effect->shadow.reserved[4] = 0.0f;
    effect->shadow.reserved[5] = 0.0f;
    effect->shadow.reserved[6] = 0.0f;
    effect->shadow.reserved[7] = 0.0f;
    effect->shadow.reserved[8] = 0.0f;
    effect->shadow.reserved[9] = 0.0f;
    effect->shadow.reserved[10] = 0.0f;
    effCopyTransformColorKeys(effect, source);
        if (effect->keys[0].resource != 0) {
        if (effect->keys[0].frame != 0) {
            s16 frame = effect->keys[0].frame - (s32)FUN_00291620(2, effect->keys[0].resource, 1);
            effect->keys[0].frame = frame;
            effect->shadow.frame = (f32)frame;
        }
        if (effect->keys[0].width != 0) {
            s16 width = effect->keys[0].width - (s32)FUN_00291620(2, effect->keys[0].resource, 1);
            effect->keys[0].width = width;
            effect->metadata[0] = width;
            effect->shadow.width = (f32)width;
        }
        if (effect->keys[0].height != 0) {
            s16 height = effect->keys[0].height - (s32)FUN_00291620(2, effect->keys[0].resource, 1);
            effect->keys[0].height = height;
            effect->metadata[1] = height;
            effect->shadow.height = (f32)height;
        }
        if (effect->keys[0].mode != 0) {
            s16 mode = effect->keys[0].mode - (s32)FUN_00291620(2, effect->keys[0].resource, 1);
            effect->keys[0].mode = mode;
            effect->metadata[2] = mode;
            effect->shadow.mode = (f32)mode;
        }
    }
    colorKeyTrackAdvanceRgb(effect, source);
    FUN_001dd974(effect, source);
    FUN_001dda40(effect, source);
    FUN_001ee200(effect, source);
    FUN_001ee3dc(effect, source);
    FUN_001ee2bc(effect, source);
    FUN_002030bc(effect, source);
    FUN_002031dc(effect, source);
    FUN_002032fc(effect, source);
}
}

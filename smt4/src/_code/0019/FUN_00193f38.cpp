/* NON_MATCHING: RGB counter reset and first target load use the inline helper's r2 object instead of the owner's r4; all 208 rows otherwise agree. */
#include "common.h"
#include "shard/W6_W6Match8_ColorKeys.h"

#define COLOR_KEY_CHANNELS 9
#define COLOR_KEY_VALUES 11
#define COLOR_KEY_ACTIVE_MODES 4

/* A colour-key effect (observed fields): nine channels (the first is RGB: three values), each with a
 * mode, a frame counter, a frame limit, and per-value current/target numbers. */
struct ColorKeyEffect {
    /* 0x000 */ u8 unk000[0x1E4];
    /* 0x1E4 */ f32 value[COLOR_KEY_VALUES];
    /* 0x210 */ f32 param[COLOR_KEY_VALUES];
    /* 0x23C */ f32 target[COLOR_KEY_VALUES];
    /* 0x268 */ u8 unk268[0x79];
    /* 0x2E1 */ s8 mode[COLOR_KEY_CHANNELS];
    /* 0x2EA */ u8 unk2EA[2];
    /* 0x2EC */ s32 counter[COLOR_KEY_CHANNELS];
    /* 0x310 */ u8 unk310[4];
    /* 0x314 */ s32 limit[COLOR_KEY_CHANNELS];
};

extern "C" {

void colorKeyTrackAdvanceRgb(ColorKeyTrack *effect, const ColorKey *timing);
void FUN_001dd974(ColorKeyEffect *effect, u32 arg);
void FUN_001dda40(ColorKeyEffect *effect, u32 arg);
void FUN_001ee200(ColorKeyEffect *effect, u32 arg);
void FUN_001ee3dc(ColorKeyEffect *effect, u32 arg);
void FUN_001ee2bc(ColorKeyEffect *effect, u32 arg);
void FUN_002030bc(ColorKeyEffect *effect, u32 arg);
void FUN_002031dc(ColorKeyEffect *effect, u32 arg);
void FUN_002032fc(ColorKeyEffect *effect, u32 arg);
void FUN_00291008(f32 *output, f32 from, f32 to);

} /* extern "C" */

/* Every scalar colour-key track has the same clock and interpolation rules. */
template <s32 Channel, s32 Value, void (*Restart)(ColorKeyEffect *, u32)>
static inline void advanceColorKeyChannel(ColorKeyEffect *effect, u32 arg)
{
    if (effect->mode[Channel] < COLOR_KEY_ACTIVE_MODES) {
        effect->counter[Channel]++;
        if (effect->limit[Channel] < effect->counter[Channel]) {
            effect->counter[Channel] = 0;
            effect->param[Value] = 0.0f;
            Restart(effect, arg);
        } else {
            FUN_00291008(&effect->value[Value], effect->param[Value], effect->target[Value]);
        }
    }
}

static inline void advanceColorKeyRgbChannel(ColorKeyEffect *effect, u32 arg)
{
    if (effect->mode[0] < COLOR_KEY_ACTIVE_MODES) {
        effect->counter[0]++;
        if (effect->limit[0] < effect->counter[0]) {
            effect->counter[0] = 0;
            effect->param[0] = 0.0f;
            effect->param[1] = 0.0f;
            effect->param[2] = 0.0f;
            colorKeyTrackAdvanceRgb(reinterpret_cast<ColorKeyTrack *>(effect),
                reinterpret_cast<const ColorKey *>(arg));
        } else {
            FUN_00291008(&effect->value[0], effect->param[0], effect->target[0]);
            FUN_00291008(&effect->value[1], effect->param[1], effect->target[1]);
            FUN_00291008(&effect->value[2], effect->param[2], effect->target[2]);
        }
    }
}

extern "C" {
/* Advances each active channel of the colour-key effect by one frame: steps its values towards the
 * targets, or restarts it when its frame limit has passed. */
void FUN_00193f38(ColorKeyEffect *effect, u32 arg)
{
    advanceColorKeyRgbChannel(effect, arg);
    advanceColorKeyChannel<1, 3, FUN_001dd974>(effect, arg);
    advanceColorKeyChannel<2, 4, FUN_001dda40>(effect, arg);
    advanceColorKeyChannel<3, 5, FUN_001ee200>(effect, arg);
    advanceColorKeyChannel<4, 6, FUN_001ee3dc>(effect, arg);
    advanceColorKeyChannel<5, 7, FUN_001ee2bc>(effect, arg);
    advanceColorKeyChannel<6, 8, FUN_002030bc>(effect, arg);
    advanceColorKeyChannel<7, 9, FUN_002031dc>(effect, arg);
    advanceColorKeyChannel<8, 10, FUN_002032fc>(effect, arg);
}

} /* extern "C" */

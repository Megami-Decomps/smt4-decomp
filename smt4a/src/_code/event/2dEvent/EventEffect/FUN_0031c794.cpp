/* NON_MATCHING: unsigned timeline bounds and switch shape recovered; global address, clamp reloads, interpolation argument and float constant lifetimes differ. */
#include "common.h"
#include "code/Code0020.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "clear_save/clearSave.h"

// Fade/slide banner shown over the event scene.
struct EventEffect {
    u8 unk00[8];
    s32 state;          // 0x08: 0 loading, 1 playing, 2 done
    s32 offset;         // 0x0c: vertical slide offset
    s32 frame;          // 0x10
    f32 alpha;          // 0x14
    u8 active;          // 0x18
    u8 slideOnly;       // 0x19: set when only the quick slide-out plays
};

// Loaded-texture check key pair (12-byte rows).
struct TexKey {
    u32 first;
    u32 second;
    u32 unk08;
};

extern "C" {

extern EventEffect* g_eventEffect;
extern TexKey DAT_0057f3d0[2];

s32 FUN_00162ea4(void);
f32 mathInterpolateTimed(s32 length, f32 from, f32 to, s32 time);
s32 lerpIntSplitClamped(s32 from, s32 to, s32 length, s32 time);

// Counts how many of the two banner textures are loaded.
static s32 loadedTextureCount()
{
    s32 loaded = 0;
    for (s32 i = 0; i < 2; i++) {
        if (asdTMTexTableNodeIsLoaded(DAT_0057f3d0[i].first, DAT_0057f3d0[i].second) != 0) loaded++;
    }
    return loaded;
}

// Advances the banner: waits for its textures, then slides/fades it along a fixed timeline.
u32 FUN_0031c794(void)
{
    EventEffect* effect = g_eventEffect;
    switch (effect->state) {
    case 0:
        if (loadedTextureCount() == 2) {
            FUN_00212204(0);
            effect->state = 1;
            effect->active = 1;
            if (FUN_00203d74() == 0) {
                effect->slideOnly = 0;
            } else {
                effect->slideOnly = 1;
                effect->offset = 0x28;
                effect->alpha = 1.0f;
            }
        }
        break;
    case 1:
        if (effect->slideOnly != 0) {
            f32 alpha = effect->alpha - 0.1f;
            s32 offset = effect->offset - 0x16;
            effect->offset = offset;
            effect->alpha = alpha;
            if (offset <= -0xb4 && alpha <= 0.0f) {
                effect->frame = 300;
                offset = effect->offset;
            }
            if (offset <= -0xb4)
                offset = -0xb4;
            effect->offset = offset;
            f32 shown = 0.0f;
            if (alpha > 0.0f) shown = alpha;
            effect->alpha = shown;
        } else {
            s32 t = effect->frame - 0xf;
            if ((u32)t <= 0x78) effect->offset = lerpIntSplitClamped(0x28, -0xb4, 0x78, t);
            t = effect->frame - 0x88;
            if ((u32)t <= 6) effect->offset = lerpIntSplitClamped(-0xb4, 0x28, 6, t);
            t = effect->frame - 0x8f;
            if ((u32)t <= 7) effect->offset = lerpIntSplitClamped(0x28, -0xb4, 7, t);
            t = effect->frame - 0xc3;
            if ((u32)t <= 4) effect->offset = lerpIntSplitClamped(-0xb4, 0x28, 4, t);
            t = effect->frame - 200;
            if ((u32)t <= 6) effect->offset = lerpIntSplitClamped(0x28, -0xb4, 6, t);
            t = effect->frame - 0xcf;
            if ((u32)t <= 4) effect->offset = lerpIntSplitClamped(-0xb4, 0x28, 4, t);
            if (effect->frame >= 0xd4) effect->offset = lerpIntSplitClamped(0x28, -0xb4, 0x2d, effect->frame - 0xd4);

            if ((u32)(effect->frame - 0xf) <= 0xbb) effect->alpha = mathInterpolateTimed(0xca, 1.0f, 0.6f, effect->frame - 0xf);
            if ((u32)(effect->frame - 0xcb) <= 7) effect->alpha = mathInterpolateTimed(8, 0.6f, 0.7f, effect->frame - 0xcb);
            if (effect->frame >= 0xf0) effect->alpha = mathInterpolateTimed(0x3c, 0.7f, 1.0f, effect->frame - 0xf0);
            if (FUN_00203d74() != 0) {
                effect->slideOnly = 1;
                effect->frame = lerpIntSplitClamped(0, 10, 0xdc, 0x28 - effect->offset);
            }
        }
        effect->frame++;
        if (effect->frame >= 301) {
            effect->active = 0;
            effect->state = 2;
        }
        break;
    }
    if (FUN_00162ea4() != 0 && loadedTextureCount() == 2) effect->state = 2;
    return 0;
}

} /* extern "C" */

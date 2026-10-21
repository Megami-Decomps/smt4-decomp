/* NON_MATCHING: scale arithmetic scheduling, short-circuit guards and visibility accessor differ; -O2 candidate. */
#include "common.h"

struct PanelSprite {
    u8 unk00[0x8a];
    s8 visible; // 0x8a
    u8 unk8b;
};
struct AnimatedPanel {
    u8 unk00[0x1c];
    u8 active; // 0x1c
    u8 unk1d[3];
    u32 frames; // 0x20
    u8 shrinking; // 0x24
    u8 unk25[3];
    f32 scaleX; // 0x28
    f32 scaleY; // 0x2c
    f32 duration; // 0x30
    u8 unk34[0x20];
    PanelSprite sprites[28]; // 0x54
    u8 unkfa4[0x9c];
    u8 enabled; // 0x1040
    u8 unk1041[2];
    u8 ready; // 0x1043
};
static __inline s32 scaleBits(f32 scale)
{
    union { f32 value; s32 bits; } representation;
    representation.value = scale;
    return representation.bits;
}
// Positive IEEE-754 scales retain numeric order when compared as signed words.
static const s32 kContractedScaleBits = 0x3e800000;
static const s32 kExpandedXBits = 0x3ec28f5c;
static const s32 kExpandedYBits = 0x3eb851ec;

extern "C" {
AnimatedPanel *jobGetWork();
void FUN_00163aa4(PanelSprite *, f32);
void FUN_001536e4(AnimatedPanel *);
void FUN_0014aa9c(s32);

// Animate the panel toward its expanded or contracted scale.
u8 panelUpdateAnimatedScale()
{
    AnimatedPanel *panel = jobGetWork();
    if (panel->enabled && panel->ready && panel->active) {
        if (panel->shrinking) {
            ++panel->frames;
            f32 x = panel->scaleX;
            if (scaleBits(x) > kContractedScaleBits) {
                x -= 0.13f / panel->duration;
                panel->scaleX = x;
            }
            panel->scaleX = scaleBits(x) > kContractedScaleBits ? x : 0.25f;
            f32 y = panel->scaleY;
            if (scaleBits(y) > kContractedScaleBits) {
                y -= 0.110000014f / panel->duration;
                panel->scaleY = y;
            }
            panel->scaleY = scaleBits(y) > kContractedScaleBits ? y : 0.25f;
            for (s32 i = 0; i < 24; ++i)
                FUN_00163aa4(&panel->sprites[i], 1.0f);
            FUN_00163aa4(&panel->sprites[26], 1.0f);
            FUN_00163aa4(&panel->sprites[27], 1.0f);
            if (panel->sprites[27].visible)
                FUN_00163aa4(&panel->sprites[24], 1.0f);
        } else {
            f32 x = panel->scaleX;
            if (scaleBits(x) < kExpandedXBits) {
                x = 0.13f / panel->duration + x;
                panel->scaleX = x;
            }
            panel->scaleX = scaleBits(x) <= kExpandedXBits ? x : 0.38f;
            f32 y = panel->scaleY;
            if (scaleBits(y) < kExpandedYBits) {
                y = 0.110000014f / panel->duration + y;
                panel->scaleY = y;
            }
            panel->scaleY = scaleBits(y) > kExpandedYBits ? 0.36f : y;
            FUN_001536e4(panel);
        }
        FUN_0014aa9c(1);
    }
    return 0;
}
}

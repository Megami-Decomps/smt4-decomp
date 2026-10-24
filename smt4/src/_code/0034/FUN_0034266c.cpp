/* NON_MATCHING: near miss: retail loads phase/phaseEnd as one vldmia pair and orders the pool constants differently; the rest of the animation step is the same sequence. */
#include "common.h"

/* Sprite description returned by FUN_002bf4f8(group, id). */
struct SpriteInfo {
    u8 unk00[4];
    u16 width;      // 0x04 (bit 15 is a flag)
};

/* The sliding banner animation state (accessed fields). */
struct BannerAnim {
    u8 unk00[0xD8];
    f32 progress;           // 0xD8
    u8 unkDC[8];
    u8 reverse;             // 0xE4: letters reveal from the other end
    u8 finished;            // 0xE5
    u8 unkE6[2];
    f32 phase;              // 0xE8
    f32 phaseEnd;           // 0xEC
    f32 position;           // 0xF0
    f32 target;             // 0xF4
    f32 step;               // 0xF8
    s32 revealed;           // 0xFC
    f32 fade[8];            // 0x100
    u8 unk120[4];
    f32 wave;               // 0x124
    f32 angle;              // 0x128
};

extern "C" SpriteInfo *FUN_002bf4f8(u32 group, u32 id);

/* Advance the banner animation: the wave timers, the sliding phase and the per-letter fade-ins. */
extern "C" void FUN_0034266c(BannerAnim *anim)
{
    anim->wave += 1.0f;
    if (anim->wave >= 30.0f)
        anim->wave -= 30.0f;
    anim->angle += 12.0f;
    if (anim->angle > 360.0f)
        anim->angle -= 360.0f;
    f32 phase = anim->phase;
    f32 phaseEnd = anim->phaseEnd;
    if (anim->finished != 0) {
        if (phase < phaseEnd) {
            anim->phase = phase + 1.0f;
            if (anim->phase >= phaseEnd)
                anim->phase = 0.0f;
        }
        return;
    }
    if (!(phase < phaseEnd))
        return;
    anim->phase = phase + 1.0f;
    if (anim->phase >= phaseEnd) {
        anim->finished = 1;
        anim->position = 400.0f;
        anim->target = 400.0f;
        for (s32 i = 0; i < 8; i++)
            anim->fade[i] = 1.0f;
        anim->phase = 0.0f;
        anim->phaseEnd = 40.0f;
        return;
    }
    anim->position = anim->target / phaseEnd + anim->position;
    if (anim->revealed != 0) {
        SpriteInfo *info = FUN_002bf4f8(20, 55);
        if (anim->revealed < 8 &&
            !(anim->progress - static_cast<f32>((info->width & 0x7FFF) * anim->revealed) < anim->target - anim->position)) {
            do {
                anim->revealed++;
            } while (anim->revealed < 8 &&
                     !(anim->progress - static_cast<f32>((info->width & 0x7FFF) * anim->revealed) <
                       anim->target - anim->position));
        }
    } else if (!(anim->target - anim->position > anim->progress)) {
        anim->revealed = 1;
        anim->step = 1.0f / ((phaseEnd - phase) * 0.125f);
    }
    s32 count = anim->revealed;
    if (anim->reverse != 0) {
        for (s32 i = 0; i < count; i++) {
            anim->fade[i] += anim->step;
            if (anim->fade[i] > 1.0f)
                anim->fade[i] = 1.0f;
        }
    } else {
        for (s32 i = 0; i < count; i++) {
            anim->fade[7 - i] += anim->step;
            if (anim->fade[7 - i] > 1.0f)
                anim->fade[7 - i] = 1.0f;
        }
    }
}

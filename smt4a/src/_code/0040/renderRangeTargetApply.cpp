/* NON_MATCHING: the packed mode word is now built with bitfield inserts as in retail; retail hoists the zero/one constants and loads the parameter as a float to store zero, one and parameter with one vstmia (a three-float value at 0x184), sets the default mode 0 before the compare chain and keeps start in s1. */
#include "gfx/RenderRangeState.h"

extern "C" RenderRangeRegistry *g_handleRegistry;

extern "C" void renderRangeTargetApply(const RenderRangeInput *input)
{
    RenderRangeTarget *target = g_handleRegistry->target;
    if (!target) {
        return;
    }
    f32 start = static_cast<f32>(input->start) * 0.001f;
    f32 begin = start + 25570.0f;
    if (static_cast<s32>(target->flags & 0x80000000u) < 0) {
        begin = input->overrideBegin;
    }
    f32 end = start + static_cast<f32>(input->span) * 0.001f + 25570.0f;
    if (static_cast<s32>(target->flags & 0x80000000u) < 0) {
        end = input->overrideEnd;
    }
    RenderPackedMode packed;
    packed.bits.first = input->first;
    packed.bits.second = input->second;
    packed.bits.third = input->third;
    u32 mode;
    switch (input->mode) {
    case 0: mode = 0; break;
    case 1: mode = 1; break;
    case 2: mode = 2; break;
    default: mode = 0; break;
    }
    packed.bits.mode = mode;
    target->begin = begin;
    target->end = end;
    target->zero = 0.0f;
    target->one = 1.0f;
    target->parameter = input->parameter;
    target->packed = packed;
}

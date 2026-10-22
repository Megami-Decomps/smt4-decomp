/* NON_MATCHING: native conversions are restored; VFP scheduling, packed-mode branches and final scalar copies differ. */
#include "gfx/RenderRangeState.h"

extern "C" RenderRangeRegistry *g_handleRegistry;

extern "C" void FUN_00401198(const RenderRangeInput *input)
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
    packed.bytes.first = static_cast<u8>(input->first);
    packed.bytes.second = static_cast<u8>(input->second);
    packed.bytes.third = static_cast<u8>(input->third);
    switch (input->mode) {
    case 1: packed.bytes.mode = 1; break;
    case 2: packed.bytes.mode = 2; break;
    default: packed.bytes.mode = 0; break;
    }
    target->begin = begin;
    target->end = end;
    target->zero = 0.0f;
    target->one = 1.0f;
    target->parameter = input->parameter;
    target->packed = packed;
}

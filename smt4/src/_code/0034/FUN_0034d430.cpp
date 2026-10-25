/* NON_MATCHING: Scratch-buffer address calculations and loop load/store register allocation differ. */
#include "common.h"
#include <stddef.h>
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void effectComputeScaledImageBounds(u32 key, u32 *output);
void FUN_003108b0(void *output, void *source);
void FUN_0032360c(void *destination, u32 key, void *work);

void FUN_0034d430(ParameterUpdatePrefixIV *state, u32 key, f32 amount)
{
    struct SourceView {
        u8 unk00[8];
        u32 *auxiliary;
        u8 unk0C[0x20];
        ParameterTargetPrefixIV *target;
    };
    struct ApplyView {
        u8 unk00[8];
        SourceView *source;
        u8 unk0C[0x1C];
        ParameterTargetPrefixIV *target;
    };
    // These views identify observed accesses, not complete descriptor sizes.
    struct ScratchView {
        u32 words[0x358 / 4];
        u32 parameters[3];
    };
    typedef char SourceOffsets[
        offsetof(SourceView, auxiliary) == 8 &&
        offsetof(SourceView, target) == 0x2C &&
        sizeof(SourceView) == 0x30 ? 1 : -1];
    typedef char ApplyOffsets[
        offsetof(ApplyView, source) == 8 &&
        offsetof(ApplyView, target) == 0x28 &&
        sizeof(ApplyView) == 0x2C ? 1 : -1];
    typedef char ScratchOffsets[
        offsetof(ScratchView, parameters) == 0x358 &&
        sizeof(ScratchView) == 0x364 ? 1 : -1];

    state->key = key;
    state->amount = amount;

    ScratchView scratch;
    effectComputeScaledImageBounds(key, scratch.parameters);
    if (state->binding != 0) {
        SourceView *source = reinterpret_cast<SourceView *>(
            &scratch.words[0x208 / 4]);
        ApplyView *destination = reinterpret_cast<ApplyView *>(
            &scratch.words[0x2B4 / 4]);

        for (s32 index = 0; index < 3; ++index) {
            ParameterTargetPrefixIV *target =
                state->binding->collection->targets[index];
            target->parameters[0] = scratch.parameters[0];
            target->parameters[1] = scratch.parameters[1];
            target->parameters[2] = scratch.parameters[2];
            target->flags |= 0x800;

            source->auxiliary = &scratch.words[0x2B0 / 4];
            destination->target = state->binding->collection->targets[index];
            FUN_003108b0(scratch.words, source);

            destination->source = source;
            source->target = state->binding->collection->targets[index];
            FUN_0032360c(destination, state->key, scratch.words);
        }
    }
}
}

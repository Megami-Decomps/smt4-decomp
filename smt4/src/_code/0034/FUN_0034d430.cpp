/* NON_MATCHING: parameter copy (ldm/stm), scratch-struct members and stack layout now follow retail; armcc folds the 0x4C target block base and keeps a copy of sp (r8) where retail addresses sp directly. */
#include "common.h"
#include <stddef.h>
#include "shard/W9_W9Match8_WorkRecords.h"

struct ParameterTriple { u32 words[3]; };
// The target's parameter block starts at 0x4C.
struct TargetBlock {
    u8 unk00[0x30];
    ParameterTriple parameters;
    u32 flags;
};
struct TargetView {
    u8 unk00[0x4C];
    TargetBlock block;
};

static void targetSetParameters(TargetBlock *block, const ParameterTriple &parameters)
{
    block->parameters = parameters;
    block->flags |= 0x800;
}

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
        u8 head[0x208];
        SourceView source;           // 0x208
        u32 unk238[(0x2B4 - 0x238) / 4];
        ApplyView destination;       // 0x2B4
        u8 unk2E0[0x358 - 0x2E0];
        ParameterTriple parameters;  // 0x358
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
        offsetof(ScratchView, source) == 0x208 &&
        offsetof(ScratchView, destination) == 0x2B4 &&
        offsetof(ScratchView, parameters) == 0x358 &&
        sizeof(ScratchView) == 0x364 ? 1 : -1];

    state->key = key;
    state->amount = amount;

    ScratchView scratch;
    effectComputeScaledImageBounds(key, scratch.parameters.words);
    if (state->binding != 0) {
        for (s32 index = 0; index < 3; ++index) {
            targetSetParameters(&reinterpret_cast<TargetView *>(
                state->binding->collection->targets[index])->block, scratch.parameters);

            scratch.source.auxiliary = &scratch.unk238[(0x2B0 - 0x238) / 4];
            scratch.destination.target = state->binding->collection->targets[index];
            FUN_003108b0(&scratch, &scratch.source);

            scratch.destination.source = &scratch.source;
            scratch.source.target = state->binding->collection->targets[index];
            FUN_0032360c(&scratch.destination, state->key, &scratch);
        }
    }
}
}

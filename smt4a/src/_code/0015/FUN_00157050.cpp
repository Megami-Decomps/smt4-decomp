/* NON_MATCHING: the parameter block (value0..mode) and depth pair are read as sub-blocks like retail and the frame now matches; remaining: register roles (retail keeps the state in r4/the context in r5 and reaches the output and depth pair by writeback from state+16). */
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void FUN_0016a438(RenderUpdateStatePrefixA *state);
void FUN_0016ae94(RenderUpdateStatePrefixA *state,
                  RenderUpdateContextPrefixA *context);
void FUN_0018ab54(u8 *result, const u8 *source);
void FUN_0018f0ac(u8 *result, u32 mode, const u8 *transform,
                  f32 value0, f32 value1, f32 value2,
                  f32 value3, f32 value4);
void FUN_0018878c(RenderUpdateOutputPrefixA *output, const u8 *packet);
void FUN_001735bc(RenderUpdateBatchA *batch);

// The state's trailing parameter block (value0 .. mode) and its depth pair, addressed as sub-blocks.
struct RenderUpdateParameters {
    f32 value0;
    f32 value1;
    u8 unk08[8];
    f32 value2;
    u8 attribute0;
    u8 attribute1;
    u8 attribute2;
    u8 mode;
};
struct RenderUpdateDepthPair {
    f32 value3;
    f32 value4;
};

void FUN_00157050(RenderUpdateStatePrefixA *state,
                  RenderUpdateContextPrefixA *context)
{
    RenderUpdateBatchA *batch = state->batch;
    FUN_0016a438(state);

    if ((state->flags & 2u) != 0) {
        FUN_0016ae94(state, context);
    } else {
        u8 transform[0x40];
        u8 packet[0x200];
        FUN_0018ab54(transform, context->transform);
        RenderUpdateOutputPrefixA *output = state->output;
        const RenderUpdateParameters *parameters = reinterpret_cast<const RenderUpdateParameters *>(&state->value0);
        const RenderUpdateDepthPair *depth = reinterpret_cast<const RenderUpdateDepthPair *>(&state->value3);
        FUN_0018f0ac(packet, parameters->mode, transform,
                      parameters->value0, parameters->value1, parameters->value2,
                      depth->value3, depth->value4);
        FUN_0018878c(output, packet);
        output->attribute0 = parameters->attribute0;
        output->attribute1 = parameters->attribute1;
        output->attribute2 = parameters->attribute2;
        output->enabled = 1;
        output->status = 0;
    }

    if (batch != 0)
        FUN_001735bc(batch);
}
}

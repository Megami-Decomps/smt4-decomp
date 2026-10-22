/* NON_MATCHING: Render-state rebasing and floating-point argument register scheduling differ. */
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
        FUN_0018f0ac(packet, state->mode, transform,
                      state->value0, state->value1, state->value2,
                      state->value3, state->value4);
        FUN_0018878c(output, packet);
        output->attribute0 = state->attribute0;
        output->attribute1 = state->attribute1;
        output->attribute2 = state->attribute2;
        output->enabled = 1;
        output->status = 0;
    }

    if (batch != 0)
        FUN_001735bc(batch);
}
}

/* NON_MATCHING: the output and depth pair are reached through the core block at state+0x10 and the parameter block at 0x17C, like retail; remaining: the parameter-block address (`add r4, r4, #380`) is formed before the transform argument here, after it in retail. */
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void FUN_0016a438(RenderUpdateStatePrefixA *state, RenderUpdateContextPrefixA *context);
void renderOutputBuildProjection(RenderUpdateStatePrefixA *state, const RenderUpdateContextPrefixA *context);
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
    FUN_0016a438(state, context);

    if ((state->flags & 2u) != 0) {
        renderOutputBuildProjection(state, context);
    } else {
        const RenderUpdateCoreA *core = &state->core;
        const RenderUpdateParametersA *parameters = &state->parameters;
        u8 transform[0x40];
        u8 packet[0x200];
        FUN_0018ab54(transform, context->transform);
        RenderUpdateOutputPrefixA *output = core->output;
        FUN_0018f0ac(packet, parameters->mode, transform,
                      parameters->value0, parameters->value1, parameters->value2,
                      core->value3, core->value4);
        FUN_0018878c(output, packet);
        output->attribute0 = parameters->attribute0;
        output->attribute1 = parameters->attribute1;
        output->attribute2 = parameters->attribute2;
        output->enabled = 1;
        output->status = 0;
    }

    if (batch != NULL)
        FUN_001735bc(batch);
}
}

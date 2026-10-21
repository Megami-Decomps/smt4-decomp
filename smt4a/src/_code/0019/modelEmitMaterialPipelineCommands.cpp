/* NON_MATCHING: block-address folding, command-packet load scheduling and final append tail-call differ; an optimization flag may explain them. */
#include "common.h"
#include "shard/W6_W6Match6_MaterialPipeline.h"

struct MaterialPipelineCommands {
    const u32 *data;
    u32 wordCount;
};
struct MaterialPipelineResource {
    u8 unk00[6];
    u8 flags;
    u8 unk07[0x9d];
    u8 mode;
    u8 valueA5;
    u8 valueA6;
    u8 valueA7;
    u8 unkA8[0x1c];
    f32 depthOffset;
    MaterialPipelineCommands commands;
};
struct MaterialPipelineInstance {
    MaterialPipelineResource *resource;
    u8 unk04[0xc];
    MaterialPipelineCommands commands;
};
struct MaterialPipelineWriter {
    u32 *position;
};
struct MaterialPipelinePiece {
    u16 flags;
    u8 unk02[0x1e];
    u16 materialIndex;
    u8 unk22[0x11e];
    MaterialPipelineCommands commands[3];
};
struct MaterialPipelineState {
    u8 unk000[0x184];
    u8 mode;
    u8 valueA5;
    u8 unk186;
    u8 valueA6;
    u8 valueA7;
    u8 unk189[4];
    u8 enabled[5];
};
struct MaterialPipelineBlock {
    u32 unk00;
    MaterialPipelineState state;
    u8 unk196[0xe2];
};
struct MaterialPipelineDepth {
    u32 packed;
    u32 unk04;
    f32 nearDepth;
    f32 farDepth;
};
struct MaterialPipelineContext {
    MaterialPipelineBlock *blocks;
    u8 unk04[0xb8];
    MaterialPipelineDepth depth;
};

extern "C" {
void FUN_001a7e84(MaterialPipelineInstance *, MaterialPipelineWriter *, MaterialPipelineState *);
void FUN_001a7af4(MaterialPipelineInstance *, MaterialPipelineContext *, MaterialPipelinePiece *);
u32 *FUN_001a748c(MaterialPipelineState *, u32 *, s32);
u32 *FUN_001a76fc(MaterialPipelineState *, u32 *);
u32 *FUN_001a78ec(MaterialPipelineDepth *, u32 *, f32);
u32 *asdGxAppendStateReset(u32 *, s32);
void FUN_001a063c(MaterialPipelineWriter *, const void *, u32);

void modelEmitMaterialPipelineCommands(MaterialPipelineInstance *material, MaterialPipelineWriter *writer,
                  MaterialPipelinePiece *piece, MaterialPipelineContext *context)
{
    if (piece->flags & 1) {
        MaterialPipelineState *state = &context->blocks[piece->materialIndex].state;
        FUN_001a7e84(material, writer, state);
        FUN_001a7af4(material, context, piece);
        state->enabled[0] = material->resource->flags & 1;
        state->enabled[1] = (material->resource->flags & 2) >> 1;
        state->enabled[2] = (material->resource->flags & 4) >> 2;
        state->enabled[3] = (material->resource->flags & 8) >> 3;
        state->enabled[4] = (material->resource->flags & 0x10) >> 4;
        state->mode = material->resource->mode & 0xf;
        state->valueA5 = material->resource->valueA5;
        state->valueA6 = material->resource->valueA6;
        state->valueA7 = material->resource->valueA7;
        u32 *commands = FUN_001a748c(state, writer->position, 1);
        commands = FUN_001a76fc(state, commands);
        if (piece->flags & 0x20) {
            commands = FUN_001a78ec(&context->depth, commands, material->resource->depthOffset);
        } else {
            *commands++ = 0;
            *commands++ = 0x000f004e;
        }
        writer->position = commands;
    } else {
        u32 *commands = asdGxAppendStateReset(writer->position, 1);
        writer->position = commands;
        if (piece->flags & 0x20) {
            writer->position = FUN_001a78ec(&context->depth, commands, material->resource->depthOffset);
        } else {
            *commands++ = 0;
            *commands++ = 0x000f004e;
            writer->position = commands;
        }
    }
    FUN_001a063c(writer, material->resource->commands.data, material->resource->commands.wordCount << 2);
    FUN_001a063c(writer, material->commands.data, material->commands.wordCount << 2);
    FUN_001a063c(writer, piece->commands[0].data, piece->commands[0].wordCount << 2);
    FUN_001a063c(writer, piece->commands[1].data, piece->commands[1].wordCount << 2);
    FUN_001a063c(writer, piece->commands[2].data, piece->commands[2].wordCount << 2);
}
}

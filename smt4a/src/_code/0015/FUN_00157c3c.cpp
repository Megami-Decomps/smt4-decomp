/* NON_MATCHING: writer/selector load scheduling, model-command argument registers and segment metadata store merging differ. */
#include "gfx/ModelMatrixUpload.h"

extern "C" {
void FUN_00177684(u32 program, u32 mode, u32 enabled);
u32 *asdGxGetCommandCursor(void);
void FUN_0016d338(ModelCommandWriter *writer, u32 *begin);
void FUN_0019a2ac(u32 *commands, const f32 *matrix, u32 header);
void FUN_0019a270(u32 *commands, const f32 *matrix, u32 header);
u32 *gpuCmdPadToAlign16(u32 *commands, u32 bytes);
u32 *gpuCmdWriteCopy(u32 *commands, u32 **sizePatch, const u32 *source, u32 bytes);

// Upload projection/model matrices and append a linked segment of model commands.
void FUN_00157c3c(ModelMatrixUploadOwner *owner, ModelMatrixUploadSource *source,
                  u32, u32 *)
{
    const f32 *projection = source->projection;
    const f32 *model = source->model;
    ModelCommandWriter *writer = owner->writer;
    FUN_00177684(source->program, 1, 1);
    FUN_0016d338(writer, asdGxGetCommandCursor());
    u32 *commands = writer->cursor;
    *commands++ = owner->projectionRegister | 0x80000000u;
    *commands++ = 0xF02C0;
    FUN_0019a2ac(commands, projection, 0xFF02C1);
    commands += 18;
    writer->cursor = commands;
    *commands++ = owner->modelRegister | 0x80000000u;
    *commands++ = 0xF02C0;
    FUN_0019a270(commands, model, 0xBF02C1);
    commands += 14;
    writer->cursor = commands;
    const u32 *modelCommands = source->commands;
    u32 bytes = source->wordCount << 2;
    if (commands != NULL && modelCommands != NULL) {
        commands = gpuCmdPadToAlign16(commands,
            ((reinterpret_cast<u32>(commands) - reinterpret_cast<u32>(writer->segmentBegin)) & ~3u) + 24);
        writer->cursor = commands;
        u32 *sizePatch;
        commands = gpuCmdWriteCopy(commands, &sizePatch, modelCommands, bytes);
        writer->cursor = commands;
        if (writer->segmentSize != NULL) {
            *writer->segmentSize = (reinterpret_cast<u32>(commands) -
                reinterpret_cast<u32>(writer->segmentBegin)) >> 3;
        }
        writer->segmentBegin = writer->cursor;
        writer->segmentSize = sizePatch;
        if (writer->firstSegmentBytes == 0) {
            writer->firstSegmentBytes = (reinterpret_cast<u32>(writer->cursor) -
                reinterpret_cast<u32>(writer->begin)) & ~3u;
        }
    }
}
}

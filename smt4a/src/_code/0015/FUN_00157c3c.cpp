/* NON_MATCHING: only the owner->writer load is scheduled before the program argument here (retail loads it after, through the copied owner register). */
#include "gfx/ModelMatrixUpload.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "Model/MoriModelEffect.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
void FUN_00177684(u32 program, u32 mode, u32 enabled);
void gfxCommandVectorResetAt(ModelCommandWriter *writer, u32 *begin);

// Upload projection/model matrices and append a linked segment of model commands.
void FUN_00157c3c(ModelMatrixUploadOwner *owner, ModelMatrixUploadSource *source,
                  u32, u32 *)
{
    const f32 *projection = source->projection;
    const f32 *model = source->model;
    ModelCommandWriter *writer = owner->writer;
    FUN_00177684(source->program, 1, 1);
    gfxCommandVectorResetAt(writer, reinterpret_cast<u32 *>(asdGxGetCommandCursor()));
    u32 *commands = writer->cursor;
    gpuAppendVertexUniformMatrix4x4(&commands, owner->projectionRegister, projection);
    writer->cursor = commands;
    gpuAppendVertexUniformMatrix3x4(&commands, owner->modelRegister, model);
    writer->cursor = commands;
    ModelCommandList list = source->commandList;
    const u32 *modelCommands = list.commands;
    u32 bytes = list.wordCount << 2;
    if (commands != NULL && modelCommands != NULL) {
        commands = gpuCmdPadToAlign16(commands, ((reinterpret_cast<u32>(commands) - reinterpret_cast<u32>(writer->segmentBegin)) & ~3u) + 24);
        writer->cursor = commands;
        u32 *sizePatch;
        commands = gpuCmdWriteCopy(commands, &sizePatch, modelCommands, bytes);
        writer->cursor = commands;
        if (writer->segmentSize != NULL) {
            *writer->segmentSize = (reinterpret_cast<u32>(commands) -
                reinterpret_cast<u32>(writer->segmentBegin)) >> 3;
        }
        writer->segmentSize = sizePatch;
        writer->segmentBegin = writer->cursor;
        if (writer->firstSegmentBytes == 0) {
            writer->firstSegmentBytes = (reinterpret_cast<u32>(writer->cursor) -
                reinterpret_cast<u32>(writer->begin)) & ~3u;
        }
    }
}
}

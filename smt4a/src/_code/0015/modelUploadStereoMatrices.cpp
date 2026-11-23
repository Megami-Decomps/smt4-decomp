#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
u32 gxIsStereoscopic3dEnabled(void);
s32 asdModelCommitCommandRange(u32 *begin, u32 *end);
s32 renderCtxResetFrameState(RenderCtxA *context);

u32 modelUploadStereoMatrices(ModelCommandPrefixA *model, const u8 *commandData)
{
    if (model->count == 0)
        return 0;

    const f32 *longData = NULL;
    const f32 *shortData = NULL;
    if (gxIsStereoscopic3dEnabled() == 1) {
        switch (g_renderCtx->stereoMode) {
        case 0:
            longData = reinterpret_cast<const f32 *>(commandData + 0x248);
            shortData = reinterpret_cast<const f32 *>(commandData + 0x1d8);
            break;
        case 1:
            longData = reinterpret_cast<const f32 *>(commandData + 0x2f8);
            shortData = reinterpret_cast<const f32 *>(commandData + 0x288);
            break;
        case 2:
            longData = reinterpret_cast<const f32 *>(commandData + 0xa8);
            shortData = reinterpret_cast<const f32 *>(commandData + 0x38);
            break;
        }
    } else {
        longData = reinterpret_cast<const f32 *>(commandData + 0xa8);
        shortData = reinterpret_cast<const f32 *>(commandData + 0x38);
    }

    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    u32 *cursor = commands;
    gpuAppendVertexUniformMatrix4x4(&cursor, model->longCommandSelector, longData);
    gpuAppendVertexUniformMatrix3x4(&cursor, model->shortCommandSelector, shortData);
    asdModelCommitCommandRange(commands, cursor);

    const u8 *selectedResource = reinterpret_cast<const u8 *>(model)
        + static_cast<u32>(model->resourceIndex) * 0x4cu + 0x48u;
    FUN_0017cdcc(*reinterpret_cast<const void *const *>(selectedResource), model->count);
    renderCtxResetFrameState(g_renderCtx);
    return 1;
}
}

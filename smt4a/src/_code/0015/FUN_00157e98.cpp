/* NON_MATCHING: Model command pointers use direct offsets rather than the retail incremental addressing. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {
u32 FUN_001696f4(void);
s32 FUN_0019a2ac(u32 *destination, const void *source, u32 command);
s32 FUN_0019a270(u32 *destination, const void *source, u32 command);
s32 asdModelCommitCommandRange(u32 *begin, u32 *end);
s32 FUN_0017cdcc(u32 resource, u32 count);
s32 FUN_001575cc(RenderCtxA *context);
extern RenderCtxA *g_renderCtx;

u32 FUN_00157e98(ModelCommandPrefixA *model, const u8 *commandData)
{
    if (model->count == 0)
        return 0;

    const void *longData = 0;
    const void *shortData = 0;
    if (FUN_001696f4() == 1) {
        switch (g_renderCtx->stereoMode) {
        case 0:
            longData = commandData + 0x248;
            shortData = commandData + 0x1d8;
            break;
        case 1:
            longData = commandData + 0x2f8;
            shortData = commandData + 0x288;
            break;
        case 2:
            longData = commandData + 0xa8;
            shortData = commandData + 0x38;
            break;
        }
    } else {
        longData = commandData + 0xa8;
        shortData = commandData + 0x38;
    }

    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    commands[0] = 0x80000000u | model->longCommandSelector;
    commands[1] = 0x000f02c0u;
    FUN_0019a2ac(commands + 2, longData, 0x00ff02c1u);
    commands[0x14] = 0x80000000u | model->shortCommandSelector;
    commands[0x15] = 0x000f02c0u;
    FUN_0019a270(commands + 0x16, shortData, 0x00bf02c1u);
    asdModelCommitCommandRange(commands, commands + 0x24);

    const u8 *selectedResource = reinterpret_cast<const u8 *>(model)
        + static_cast<u32>(model->resourceIndex) * 0x4cu + 0x48u;
    FUN_0017cdcc(*reinterpret_cast<const u32 *>(selectedResource), model->count);
    FUN_001575cc(g_renderCtx);
    return 1;
}
}

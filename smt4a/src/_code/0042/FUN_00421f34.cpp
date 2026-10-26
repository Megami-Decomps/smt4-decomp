/* NON_MATCHING: command fields and frame size match, but the compiler reorders byte stores, RGB shifts and constant registers after initialization. */
#include "shard/W6_W6Match7_CombinerState.h"

static __inline void combinerStageSetColorInput(CombinerStage* stage, u8 function, u8 source)
{
    stage->color.function = function;
    stage->color.sources[1] = source;
}

static __inline void combinerStageSetConstantColor(CombinerStage* stage, u32 rgba)
{
    stage->constantColor.r = static_cast<u8>(rgba >> 24);
    stage->constantColor.g = static_cast<u8>(rgba >> 16);
    stage->constantColor.b = static_cast<u8>(rgba >> 8);
}

static __inline void combinerStageSetup(CombinerStage* stage, u8 function, u8 source, u32 rgba)
{
    combinerStageSetColorInput(stage, function, source);
    combinerStageSetConstantColor(stage, rgba);
}

extern "C" {
void FUN_00158b88(CombinerState* command);
void FUN_0015fcec(CombinerState* command, void* context);

void FUN_00421f34(void* context, u32 rgba)
{
    CombinerState command;
    gfxCombinerStateInitialize(&command);
    FUN_00158b88(&command);
    combinerStageSetup(&command.stages[1], 2, 14, rgba);
    FUN_0015fcec(&command, context);
}
}

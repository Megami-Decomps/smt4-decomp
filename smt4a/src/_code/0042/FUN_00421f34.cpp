/* NON_MATCHING: command fields and frame size match, but the compiler reorders byte stores, RGB shifts and constant registers after initialization. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
void FUN_00158b88(CombinerState* command);
void FUN_0015fcec(CombinerState* command, void* context);

void FUN_00421f34(void* context, u32 rgba)
{
    CombinerState command;
    gfxCombinerStateInitialize(&command);
    FUN_00158b88(&command);
    command.stages[1].color.function = 2;
    command.stages[1].color.sources[1] = 14;
    command.stages[1].constantColor.r = static_cast<u8>(rgba >> 24);
    command.stages[1].constantColor.g = static_cast<u8>(rgba >> 16);
    command.stages[1].constantColor.b = static_cast<u8>(rgba >> 8);
    FUN_0015fcec(&command, context);
}
}

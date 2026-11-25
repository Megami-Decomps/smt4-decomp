#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
void FUN_002b612c(CombinerState *);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *);
u32 *nn_gr_CTR_Combiner_MakeCommand(CombinerState *, u32 *);

enum {
    COMBINER_ADD = 2,
    COMBINER_CONSTANT_COLOR = 0x0E
};

/* Modulates the texture by primary color, then adds the RGB channels of an RRGGBBAA word. */
u32 *combinerAddConstantColor(u32 *commands, u32 color)
{
    CombinerState combiner;
    FUN_002b612c(&combiner);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&combiner.stages[0]);
    CombinerStage &stage = combiner.stages[1];
    stage.color.function = COMBINER_ADD;
    stage.color.sources[1] = COMBINER_CONSTANT_COLOR;
    stage.constantColor.r = color >> 24;
    stage.constantColor.g = (color & 0x00FF0000u) >> 16;
    stage.constantColor.b = (color & 0x0000FF00u) >> 8;
    return nn_gr_CTR_Combiner_MakeCommand(&combiner, commands);
}

} /* extern "C" */

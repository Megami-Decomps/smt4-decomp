/* NON_MATCHING: constant-color extraction registers and independent byte-store scheduling differ. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
void FUN_002b612c(CombinerState *);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *);
u32 *nn_gr_CTR_Combiner_MakeCommand(CombinerState *, u32 *);

/* Modulates the texture by primary color, then adds the supplied constant RGB color. */
u32 *FUN_0023d078(u32 *commands, u32 color)
{
    CombinerState combiner;
    FUN_002b612c(&combiner);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&combiner.stages[0]);
    CombinerStage &stage = combiner.stages[1];
    stage.color.function = 2; /* add */
    stage.color.sources[1] = 0x0e; /* constant color */
    stage.constantColor.r = color >> 24;
    stage.constantColor.g = color >> 16;
    stage.constantColor.b = color >> 8;
    return nn_gr_CTR_Combiner_MakeCommand(&combiner, commands);
}
}

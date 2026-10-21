/* NON_MATCHING: constant-color extraction registers and independent byte-store scheduling differ. */
#include "common.h"

struct CombinerStage {
    u8 colorFunction; // 0x00
    u8 colorOperands[3];
    u8 colorSources[3]; // 0x04
    u8 colorScale;
    u8 colorBufferInput;
    u8 alphaFunction; // 0x09
    u8 alphaOperands[3];
    u8 alphaSources[3]; // 0x0d
    u8 alphaScale;
    u8 alphaBufferInput;
    u8 constantColor[4]; // 0x12
    u16 registerId; // 0x16
};
struct CombinerState {
    CombinerStage stages[6];
    u32 bufferColor; // 0x90
};

extern "C" {
void FUN_002b612c(CombinerState *);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *);
u32 *nn_gr_CTR_Combiner_MakeCommand(CombinerState *, u32 *);

// Modulate the texture by primary color, then add the supplied constant RGB color.
u32 *FUN_0023d078(u32 *commands, u32 color)
{
    CombinerState combiner;
    FUN_002b612c(&combiner);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&combiner.stages[0]);
    CombinerStage &stage = combiner.stages[1];
    stage.colorFunction = 2; // add
    stage.colorSources[1] = 0x0e; // constant color
    stage.constantColor[0] = color >> 24;
    stage.constantColor[1] = color >> 16;
    stage.constantColor[2] = color >> 8;
    return nn_gr_CTR_Combiner_MakeCommand(&combiner, commands);
}
}

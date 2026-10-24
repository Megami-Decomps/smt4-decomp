#include "common.h"

extern "C" {
extern void *g_btlStageModel;
s32 scrGetArg(u32 index);
void childrenLowerToLevel(void *model, s32 level);
}

extern "C" s32 FUN_0038109c(void)
{
    childrenLowerToLevel(g_btlStageModel, scrGetArg(0));
    return 1;
}

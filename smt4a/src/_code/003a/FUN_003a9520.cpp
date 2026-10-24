#include "common.h"

extern "C" {

extern u32 g_btlStageModel;

s32 FUN_004015e8(u32 model);

/* Reports whether the battle stage model passes FUN_004015e8. */
u32 FUN_003a9520(void)
{
    return FUN_004015e8(g_btlStageModel) != 0;
}

} /* extern "C" */

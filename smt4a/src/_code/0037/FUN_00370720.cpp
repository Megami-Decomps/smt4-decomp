#include "common.h"

extern "C" {

void mapSetSceneState(s32 state);
void FUN_002750d8(s32 first, s32 second);
void FUN_00303460(s32 value);

/* Script command: switches the map scene to state 33 and runs the follow-up steps. */
u32 FUN_00370720(void)
{
    mapSetSceneState(33);
    FUN_002750d8(1, 1);
    FUN_00303460(4);
    return 1;
}

} /* extern "C" */

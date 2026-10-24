#include "common.h"

extern "C" {

void mapSetSceneState(s32 value);

/* Script command: sets the map scene state to 0x39. */
s32 FUN_003b04e4(void)
{
    mapSetSceneState(0x39);
    return 1;
}

} /* extern "C" */

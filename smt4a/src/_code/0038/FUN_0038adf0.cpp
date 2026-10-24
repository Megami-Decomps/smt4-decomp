#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void lmapInitializeArea(s32 area, s32 mode);

/* Script command: initializes the lmap area from its first two arguments. */
u32 FUN_0038adf0(void)
{
    s32 mode = scrGetArg(1);

    lmapInitializeArea(scrGetArg(0), mode);
    return 1;
}

} /* extern "C" */

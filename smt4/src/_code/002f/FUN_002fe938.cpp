#include "common.h"

extern "C" {

int scrGetArg(...);
int mapCameraLoad(u32 a, u32 b);
int modelSlotAttachObjectChild(void);

u32 FUN_002fe938(void)
{
    u32 b = scrGetArg();
    u32 a = scrGetArg(0);

    mapCameraLoad(a, b);
    modelSlotAttachObjectChild();
    return 1;
}

} /* extern "C" */

#include "common.h"

extern "C" {

void FUN_00301830(void);
void FUN_00303a48(void);
s32 lmapMainIsRunning(void);
s32 FUN_002b4cb0(void);
s32 mapMainIsBusy(void);

/* Map step: runs FUN_00303a48 while the map is busy or the local map is running, otherwise FUN_00301830 when FUN_002b4cb0 allows it; always returns 1. */
u32 FUN_002a3cf4(void)
{
    s32 result;

    result = mapMainIsBusy();
    if ((result != 0) || (result = lmapMainIsRunning(), result != 0)) {
        FUN_00303a48();
    } else {
        result = FUN_002b4cb0();
        if (result != 0) {
            FUN_00301830();
        }
    }
    return 1;
}

} /* extern "C" */

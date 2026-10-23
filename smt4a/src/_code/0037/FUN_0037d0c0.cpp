#include "common.h"

extern "C" {

int eventTexSetCurrent(void);
int eventInsertSortedTextureJob(u32 obj);
u32 FUN_003c8fd4(u32 obj);
u32 scrGetArg(void);
int FUN_0039af04(void);

/* Script command: if FUN_0039af04 reports success, runs FUN_003c8fd4 on the object from scrGetArg, then eventTexSetCurrent and eventInsertSortedTextureJob. */
u32 FUN_0037d0c0(void)
{
    u32 obj = scrGetArg();

    if (FUN_0039af04() != 0) {
        obj = FUN_003c8fd4(obj);
        eventTexSetCurrent();
        eventInsertSortedTextureJob(obj);
    }
    return 1;
}

} /* extern "C" */

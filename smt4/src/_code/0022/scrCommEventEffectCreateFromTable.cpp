#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern const char *DAT_0043df70[];
u32 FUN_0030a2c0(const char *path, s32 x, s32 y, s32 z);

// Script command: creates the event effect `arg0` of the table at (0, 0, arg1) and returns its job.
u32 scrCommEventEffectCreateFromTable(void)
{
    s32 effect = scrGetArg(0);
    s32 z = scrGetArg(1);
    scrSetResult(FUN_0030a2c0(DAT_0043df70[effect], 0, 0, z));
    return 1;
}

} /* extern "C" */

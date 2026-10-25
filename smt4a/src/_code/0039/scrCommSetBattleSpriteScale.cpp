#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int FUN_0015f490(u32 arg0, u32 arg1, float scale, int arg3, int arg4);
u32 scrGetArg(u32 index);

/* Script command: runs btlGetMainState, then FUN_0015f490 with script arguments 0 and 1 (scale 1.0). */
u32 scrCommSetBattleSpriteScale(void)
{
    u32 arg0;
    u32 arg1;

    reinterpret_cast<int>(btlGetMainState());
    arg0 = scrGetArg(0);
    arg1 = scrGetArg(1);
    FUN_0015f490(arg0, arg1, 1.0f, 1, 0);
    return 1;
}

} /* extern "C" */
